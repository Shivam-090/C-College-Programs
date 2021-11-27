// Program to print first N Natural Numbers using while loop

#include <stdio.h>
int main()
{
    int num, count = 1;
    printf("Enter a positive number\n");
    scanf("%d", &num);
    while (count <= num)
    {
        printf("%d\n", count);
        count++;
    }
    return 0;
}
