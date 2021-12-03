// Convert Positive number to roman number

#include <stdio.h>
int main()
{
    int n;
    printf("Enter a positive number : ");
    scanf("%d", &n);

    printf("Roman number : ");
    while (n != 0)
    {

        if (n >= 1000) // 1000 - m
        {
            printf("m");
            n -= 1000;
        }

        else if (n >= 900) // 900 -  cm
        {
            printf("cm");
            n -= 900;
        }

        else if (n >= 500) // 500 - d
        {
            printf("d");
            n -= 500;
        }

        else if (n >= 400) // 400 -  cd
        {
            printf("cd");
            n -= 400;
        }

        else if (n >= 100) // 100 - c
        {
            printf("c");
            n -= 100;
        }

        else if (n >= 90) // 90 - xc
        {
            printf("xc");
            n -= 90;
        }

        else if (n >= 50) // 50 - l
        {
            printf("l");
            n -= 50;
        }

        else if (n >= 40) // 40 - xl
        {
            printf("xl");
            n -= 40;
        }

        else if (n >= 10) // 10 - x
        {
            printf("x");
            n -= 10;
        }

        else if (n >= 9) // 9 - ix
        {
            printf("ix");
            n -= 9;
        }

        else if (n >= 5) // 5 - v
        {
            printf("v");
            n -= 5;
        }

        else if (n >= 4) // 4 - iv
        {
            printf("iv");
            n -= 4;
        }

        else if (n >= 1) // 1 - i
        {
            printf("i");
            n -= 1;
        }
    }

    return 0;
}