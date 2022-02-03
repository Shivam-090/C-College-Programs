// Prime number or not using functions

#include <stdio.h>
int main()
{
    int prime(int n);
    int num, flag = 0;
    printf("\nENTER A NUMBER: ");
    scanf("%d", &num);
    flag = prime(num);
    if (flag == 0)
        printf("\n%d IS A PRIME NUMBER", num);
    else
        printf("\n%d IS NOT A PRIME NUMBER", num);
    return 0;
}
int prime(int n)
{
    for (int i = 2; i <= n / 2; i++)
    {
        if (n % i != 0)
            continue;
        else
            return 1;
    }
    return 0;
}
