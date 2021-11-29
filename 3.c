// Program to perform division by zero and display appropriate warning message using goto statement

#include <stdio.h>
int main()
{
    int a, b;
    float c;
    printf("Enter value of a: ");
    scanf("%d", &a);
    printf("Enter value of b: ");
    scanf("%d", &b);
    if (a == 0 || b == 0)
    {
        goto error;
    }
    else
    {
        goto result;
    }
error:
    printf("Values entered returns out to be 0");
    return 0;
result:
    c = (float)a / b;
    printf("Result is %.2f\n", c);
    return 0;
}
