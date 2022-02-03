#include <stdio.h>
int main()
{
    int n, count, a, b, c;
    printf("Enter a positive number : ");
    scanf("%d", &n);
    {
        for (int i = 1; i <= n; i++)
        {
            if (n % i == 0)
            {
                count++;
            }
        }
        if (count == 2)
        {
            printf("%d is a prime number", n);
        }
        else
        {
            printf("%d is not a prime number", n);
        }
    }
    {
        a = 0;
        b = 1;
        c = a + b;
        while (c < n)
        {
            a = b;
            b = c;
            c = a + b;
        }
        if (c == n)
            printf("\n%d is a Fibonacci term", n);
        else
            printf("\n%d is not a Fibonacci term", n);
    }

    return 0;
}
