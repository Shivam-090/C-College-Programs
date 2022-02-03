#include <stdio.h>

int main()
{

    int n, i, reverse;

    printf("\n Enter the size of the array: ");
    scanf("%d", &n);
    int array[n];

    printf("\n Enter %d elements of  the array: \n", n);

    for (i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
    }
    printf("\n Reverse element present in the given array is : ");
    for ( i = n-1; i >= 0; i--)
    {
        printf("\n%d",array[i]);
    }
    
    return 0;
}