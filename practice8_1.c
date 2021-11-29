// 1. Write a program in C to print the sum of first n natural numbers.
// Definition of Done:
// a) The program should ask the user to enter the value of n (positive integer). If 
// not positive, ask the user to input appropriate value.
// b) The program should use while, do-while and for loop. 


#include<stdio.h>
int main(){
    int n,sum= 0;
    printf("Enter a Value : ");
    scanf("%d",&n);
    if ( n < 0)
    {
        printf("Value is not positive");
        return 0; 
    }
    printf("\nUsing While loop\n");
    {
        int j=1;
        while (j<=n)
        {
        printf("%d, ",j);
        sum+=j;
        j++;
        }
        printf("\nSum = %d",sum);
    }
    printf("\n\n");
    printf("\nUsing Do-while loop\n");
    {
        int k = 1;
        sum = 0;
        do
        {
            printf("%d, ",k);
            sum+=k;
            k++;
        } 
        while (k<=n);
        printf("\nSum = %d",sum);
    }
    printf("\n\n");
    printf("\nUsing for loop\n");
    {
        sum = 0;
        for (int i = 1; i <= n; i++)
        {
            printf("%d, ",i);
            sum+=i;
        }
        printf("\nSum = %d",sum);
    }
    return 0;
}