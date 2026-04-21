#include <stdio.h>
#include <stdlib.h>
/* Node structure */
struct node
{
int data;
struct node *next;
};
struct node *top = NULL;
/* Push operation */
void push()
{
struct node *newnode;
newnode = (struct node *)malloc(sizeof(struct node));
if (newnode == NULL)
{
printf("Stack Overflow\n");
return;
}

printf("Enter data: ");
scanf("%d", &newnode->data);
newnode->next = top;
top = newnode;
}
/* Pop operation */
void pop()
{
struct node *temp;
if (top == NULL)
printf("Stack Underflow\n");
else
{
temp = top;
printf("Popped element: %d\n", temp->data);
top = top->next;
free(temp);
}
}
/* Display stack */
void display()
{
struct node *temp;
if (top == NULL)
printf("Stack is empty\n");
else
{
temp = top;
printf("Stack elements:\n");
while (temp != NULL)
{
printf("%d -> ", temp->data);
temp = temp->next;
}
printf("NULL\n");
}
}
int main()
{
int choice;
while (1)
{

printf("\n1.Push\n2.Pop\n3.Display\n4.Exit\n");
printf("Enter your choice: ");
scanf("%d", &choice);
switch (choice)
{
case 1:
push();
break;
case 2:
pop();
break;
case 3:
display();
break;
case 4:
exit(0);
default:
printf("Invalid choice\n");
}
}
}