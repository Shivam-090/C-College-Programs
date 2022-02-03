#include <stdio.h>
int main()
{
    int n, i, j;
    float num[100], a[5], b[5], c[5];
    printf("Enter Number of elements :");
    scanf("%d", &n);
    printf("1st Array\n");
    for (i = 0; i < n; i++)
    {
        printf("Enter %d Number : ", i + 1);
        scanf("%f", &a[i]);
    }
    printf("2nd Array\n");
    for (i = 0; i < n; i++)
    {
        printf("Enter %d Number : ", i + 1);
        scanf("%f", &b[i]);
    }
    printf("1. Add\n2. Substract \n");
    scanf("%d", &j);
    switch (j)
    {
    case 1:
        printf("\nThe output of addition of 2 array is\n");
        for (i = 0; i < n; i++)
        {
            c[i] = a[i] + b[i];
            printf("\nthe sum of %.2f & %.2f is %.2f", a[i], b[i], c[i]);
        }
        break;
    case 2:
        printf("\nThe output of Substract of 2 array is\n");
        for (i = 0; i < n; i++)
        {
            c[i] = a[i] - b[i];
            printf("\nthe sub of %.2f & %.2f is %.2f", a[i], b[i], c[i]);
        }
        break;
    default:
        printf("Wrong Input!");
        break;
    }

    return 0;
}