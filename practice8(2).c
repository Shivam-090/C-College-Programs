#include<stdio.h>
int main(){
    int n;
    printf("Enter Number of rows : ");
    scanf("%d",&n);
    for (int i = 0; i < n; i++)
    {
        printf("* ");
    }
    printf("\n");
    for (int i = n-2; i>=1 ; --i)
    {
        for (int j = 1; j <= i; ++j)
        {
            printf("  ");
            if (j == i)
            {
                printf("*\n");
            }
        }
        
    }
    for ( int i = 0; i < n; i++)
    {
        printf("* ");
    }
    
    
    return 0;
}