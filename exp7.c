#include <stdio.h>
#include <stdlib.h>
struct node
{
int data;
struct node *prev;
struct node *next;
};
struct node *head = NULL;
void create()
{
struct node *temp, *newnode;
int choice = 1;
while(choice)
{
newnode = (struct node*)malloc(sizeof(struct node));
printf("Enter data: ");
scanf("%d",&newnode->data);
newnode->prev = NULL;
newnode->next = NULL;
if(head == NULL)
{
head = temp = newnode;
}
else
{
temp->next = newnode;
newnode->prev = temp;
temp = newnode;
}
printf("Continue? (1/0): ");
scanf("%d",&choice);

}
}
void display()
{
struct node *temp;
temp = head;
while(temp != NULL)
{
printf("%d <-> ", temp->data);
temp = temp->next;
}
printf("NULL");
}
int main()
{
create();
display();
return 0;
}