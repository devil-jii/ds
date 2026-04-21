#include <stdio.h>

#define SIZE 5

int q[SIZE], front = -1, rear = -1;

void enqueue();
void dequeue();
void display();
void peek();

int main()
{
    int ch;

    while (1)
    {
        printf("\n1.Enqueue  2.Dequeue  3.Peek  4.Display  5.Exit");
        printf("\nEnter choice: ");
        scanf("%d", &ch);

        switch (ch)
        {
            case 1: enqueue(); break;
            case 2: dequeue(); break;
            case 3: peek(); break;
            case 4: display(); break;
            case 5: return 0;
            default: printf("Wrong choice!");
        }
    }
}

/* Enqueue */
void enqueue()
{
    if (rear == SIZE - 1)
    {
        printf("Overflow");
        return;
    }

    if (front == -1) front = 0;

    rear++;
    printf("Enter value: ");
    scanf("%d", &q[rear]);
}

/* Dequeue */
void dequeue()
{
    if (front == -1 || front > rear)
    {
        printf("Underflow");
        return;
    }

    printf("Deleted: %d", q[front]);
    front++;
}

/* Peek */
void peek()
{
    if (front == -1 || front > rear)
        printf("Empty");
    else
        printf("Front: %d", q[front]);
}

/* Display */
void display()
{
    if (front == -1 || front > rear)
    {
        printf("Empty");
        return;
    }

    for (int i = front; i <= rear; i++)
        printf("%d ", q[i]);
}