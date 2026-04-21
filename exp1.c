#include<stdio.h> 
int main() 
{ 
    int array[5], i, position; 

    printf("Enter 5 numbers:\n");
    for(i = 0; i < 5; i++) 
        scanf("%d", &array[i]); 

    printf("Enter position to delete (0-4): ");
    scanf("%d", &position);   

    if(position < 0 || position > 4)
        return 0;

    for(i = position; i < 4; i++) 
        array[i] = array[i + 1]; 

    printf("Array after deletion:\n");
    for(i = 0; i < 4; i++) 
        printf("%d ", array[i]); 

    return 0; 
}
