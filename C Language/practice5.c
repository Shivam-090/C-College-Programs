#include <stdio.h>
int main()
{
    // 1st Program ( Practical 9 )
    int i, j, rows;
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    for (i = 1; i <= rows; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }

    // 2nd Program ( Practical 9 )
    int rows2;
    printf("Enter the number of rows: ");
    scanf("%d", &rows2);
    for (int i2 = rows2; i2 > 0; i2--)
    {
        for (int j2 = 1; j2 <= i2; j2++)
        {
            printf("%d", j2);
        }
        printf("\n");
    }

    // 3rd Program ( Practical 9 )
    int rows3;
    printf("Enter the number of rows: ");
    scanf("%d", &rows3);
    for (int i3 = 1; i3 <= rows3; i3++)
    {
        for (int j3 = 1; j3 <= rows3 - i3; j3++)
        {
            printf(" ");
        }

        for (int j3 = 1; j3 <= 2 * i3 - 1; j3++)
        {
            printf("*");
        }
        printf("\n");
    }

    // 4th Program ( Practical 9 )
    int i4, j4, rows4, k4 = 0, count4 = 0, count41 = 0;
    printf("Enter the number of rows: ");
    scanf("%d", &rows4);
    for (i4 = 1; i4 <= rows4; i4++)
    {
        for (j4 = 1; j4 <= rows4 - i4; j4++)
        {
            printf("  ");
            ++count4;
        }
        while (k4 != 2 * i4 - 1)
        {
            if (count4 <= rows4 - 1)
            {
                printf("%d ", i4 + k4);
                ++count4;
            }
            else
            {
                ++count41;
                printf("%d ", (i4 + k4 - 2 * count41));
            }
            ++k4;
        }
        count41 = count4 = k4 = 0;
        printf("\n");
    }
    // 5th Program ( Practical 9 )
    int rows5, i5, j5, k5 = 1;
    printf("Enter the number of rows: ");
    scanf("%d", &rows5);
    for (i5 = 1; i5 <= rows5; i5++)
    {
        for (j5 = 1; j5 <= i5; j5++)
        {
            printf("%d ", k5);
            k5++;
        }
        printf("\n");
    }
    return 0;
}
