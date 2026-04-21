#include <stdio.h>
#include <stdlib.h>
/* BST Node structure */
struct node
{
int data;
struct node *left;
struct node *right;
};
/* Create new node */
struct node* createNode(int data)
{
struct node *newnode;
newnode = (struct node*)malloc(sizeof(struct node));
newnode->data = data;
newnode->left = NULL;
newnode->right = NULL;
return newnode;
}
/* Insert into BST */
struct node* insert(struct node *root, int data)
{
if (root == NULL)
return createNode(data);
if (data < root->data)
root->left = insert(root->left, data);
else if (data > root->data)
root->right = insert(root->right, data);
return root;
}
/* Inorder traversal */
void inorder(struct node *root)
{
if (root != NULL)
{
inorder(root->left);
printf("%d ", root->data);
inorder(root->right);
}
}
/* Preorder traversal */
void preorder(struct node *root)
{

if (root != NULL)
{
printf("%d ", root->data);
preorder(root->left);
preorder(root->right);
}
}
/* Postorder traversal */
void postorder(struct node *root)
{
if (root != NULL)
{
postorder(root->left);
postorder(root->right);
printf("%d ", root->data);
}
}
int main()
{
struct node *root = NULL;
int choice, data;
while (1)
{
printf("\n1.Insert\n2.Inorder\n3.Preorder\n4.Postorder\n5.Exit");
printf("\nEnter your choice: ");
scanf("%d", &choice);
switch (choice)
{
case 1:
printf("Enter data: ");
scanf("%d", &data);
root = insert(root, data);
break;
case 2:
printf("Inorder Traversal: ");
inorder(root);
break;
case 3:
printf("Preorder Traversal: ");
preorder(root);
break;
case 4:
printf("Postorder Traversal: ");

postorder(root);
break;
case 5:
exit(0);
default:
printf("Invalid choice");
}
}
}