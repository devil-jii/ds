#include <stdio.h>
#include <stdlib.h>
struct node {
int data;
struct node *next;
};
int main() {
struct node *head = NULL, *newnode, *temp;
int choice = 1;
while (choice) {
newnode = (struct node*) malloc(sizeof(struct node));
if (newnode == NULL) {
printf("Memory allocation failed!\n");
return 1;
}
printf("Enter data: ");
scanf("%d", &newnode->data);
newnode->next = NULL;
if (head == NULL) {
head = newnode;
temp = newnode;
}
else {
temp->next = newnode;
temp = newnode;
}
printf("Do you want to continue? (1 for Yes / 0 for No): ");
scanf("%d", &choice);
}
printf("\nLinked List Elements are:\n");

temp = head;
while (temp != NULL) {
printf("%d -> ", temp->data);
temp = temp->next;
}
printf("NULL\n");
return 0;
}