//Design a program that calculates the sum of elements in an array.
#include <stdio.h>

int main() 
{
    int n, i, sum = 0;
    
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n]; 
    printf("Enter %d elements: \n", n);
    for(i = 0; i < n; i++)
 {
        scanf("%d", &arr[i]);
    }
    for(i = 0; i < n; i++) 
{
        sum += arr[i];
    }
printf("Sum of the elements: %d\n", sum); 
     return 0;
}
