#include <stdio.h>
#define MAX 100

int stack[MAX], top = -1, n;

void push()
{
    int x;
    if (top == n - 1)
        printf("Overflow\n");
    else
    {
        printf("Enter value: ");
        scanf("%d", &x);
        stack[++top] = x;
    }
}

void pop()
{
    if (top == -1)
        printf("Underflow\n");
    else
        printf("Popped: %d\n", stack[top--]);
}

void display()
{
    int i;
    if (top == -1)
        printf("Empty\n");
    else
    {
        for (i = top; i >= 0; i--)
            printf("%d ", stack[i]);
        printf("\n");
    }
}

int main()
{
    int choice;

    printf("Enter size: ");
    scanf("%d", &n);

    do
    {
        printf("\n1.Push \n2.Pop \n3.Display \n4.Exit");
        printf("\nEnter your choice:");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1: push(); break;
        case 2: pop(); break;
        case 3: display(); break;
        case 4: break;
        default: printf("Wrong choice\n");
        }

    } while (choice != 4);

    return 0;
}