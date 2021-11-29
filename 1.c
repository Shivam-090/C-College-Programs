// Program to print first N Natural Numbers using while loop

#include <stdio.h>
int main()
{
    int num, count = 1;
    printf("Enter a positive number : ");
    scanf("%d", &num);
    while (count <= num)
    {
        printf("\n%d", count);
        count++;
    }
    return 0;
}
