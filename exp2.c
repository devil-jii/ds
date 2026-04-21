#include <stdio.h> 
 
/* Recursive function */ 
int sum(int arr[], int n) 
{ 
    if (n <= 0) 
        return 0;          // Base case 
    else 
        return arr[n - 1] + sum(arr, n - 1); 
} 
 
int main() 
{ 
    int arr[10], n, i; 
 
    printf("Enter number of elements: "); 
    scanf("%d", &n); 
 
    printf("Enter elements:\n"); 
    for (i = 0; i < n; i++) 
        scanf("%d", &arr[i]); 
 
    printf("Sum of elements = %d\n", sum(arr, n)); 
 
    return 0;
}