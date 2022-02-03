// Square of number using functions

#include <stdio.h>
int main()
{
    int square(int);
    int num;
    printf("Enter Number : ");
    scanf("%d", &num);
    printf("Result is %d", square(num));
    return 0;
}
int square(int num)
{
    return (num * num);
}