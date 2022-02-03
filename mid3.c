#include <stdio.h>
int main()
{
    int i, sum = 0, n;
    printf("Enter a number : ");
    scanf("%d", &n);
    for (i = 2; i <= n; i += 3)
    {
        sum += i;
    }
    printf("SUM = %d", sum);

    return 0;
}
