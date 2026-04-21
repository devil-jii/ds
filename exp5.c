#include <stdio.h>
#define MAX 5

int q[MAX], front = -1, rear = -1;

void insert();
void delete();
void display();

int main()
{
    int ch;

    while (1)
    {
        printf("\n1.Insert 2.Delete 3.Display 4.Exit");
        printf("\nEnter choice: ");
        scanf("%d", &ch);

        switch (ch)
        {
            case 1: insert(); break;
            case 2: delete(); break;
            case 3: display(); break;
            case 4: return 0;
            default: printf("Wrong choice");
        }
    }
}

/* Insert */
void insert()
{
    int x;

    if ((rear + 1) % MAX == front)
    {
        printf("Overflow");
        return;
    }

    printf("Enter value: ");
    scanf("%d", &x);

    if (front == -1)
        front = rear = 0;
    else
        rear = (rear + 1) % MAX;

    q[rear] = x;
}

/* Delete */
void delete()
{
    if (front == -1)
    {
        printf("Underflow");
        return;
    }

    printf("Deleted: %d", q[front]);

    if (front == rear)
        front = rear = -1;
    else
        front = (front + 1) % MAX;
}

/* Display */
void display()
{
    int i;

    if (front == -1)
    {
        printf("Empty");
        return;
    }

    i = front;
    while (1)
    {
        printf("%d ", q[i]);
        if (i == rear) break;
        i = (i + 1) % MAX;
    }
}