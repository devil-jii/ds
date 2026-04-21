#include <stdio.h>
#include <stdlib.h>
struct node
{
int data;
struct node *next;
};
struct node *front = NULL;
struct node *rear = NULL;
/* Insert at front */
void insertFront()
{
struct node *newnode;
newnode = (struct node *)malloc(sizeof(struct node));
printf("Enter data: ");
scanf("%d", &newnode->data);
newnode->next = front;

front = newnode;
if (rear == NULL)
rear = front;
}
/* Insert at rear */
void insertRear()
{
struct node *newnode;
newnode = (struct node *)malloc(sizeof(struct node));
printf("Enter data: ");
scanf("%d", &newnode->data);
newnode->next = NULL;
if (rear == NULL)
{
front = rear = newnode;
}
else
{
rear->next = newnode;
rear = newnode;
}
}
/* Delete from front */
void deleteFront()
{
struct node *temp;
if (front == NULL)
printf("Deque is empty\n");
else
{
temp = front;
front = front->next;
printf("Deleted element: %d\n", temp->data);
free(temp);
if (front == NULL)
rear = NULL;
}
}
/* Delete from rear */
void deleteRear()
{

struct node *temp, *prev;
if (rear == NULL)
printf("Deque is empty\n");
else if (front == rear)
{
printf("Deleted element: %d\n", rear->data);
free(rear);
front = rear = NULL;
}
else
{
temp = front;
while (temp->next != rear)
temp = temp->next;
prev = temp;
printf("Deleted element: %d\n", rear->data);
free(rear);
rear = prev;
rear->next = NULL;
}
}
/* Display deque */
void display()
{
struct node *temp;
if (front == NULL)
printf("Deque is empty\n");
else
{
temp = front;
printf("Deque elements:\n");
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

printf("\n1.Insert Front\n2.Insert Rear\n3.Delete Front\n4.Delete
Rear\n5.Display\n6.Exit\n");
printf("Enter your choice: ");
scanf("%d", &choice);
switch (choice)
{
case 1:
insertFront();
break;
case 2:
insertRear();
break;
case 3:
deleteFront();
break;
case 4:
deleteRear();
break;
case 5:
display();
break;
case 6:
exit(0);
default:
printf("Invalid choice\n");
}
}
}