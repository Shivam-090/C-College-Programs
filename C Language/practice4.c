// Practical 4
// 1.    Write a program to print whether a number entered by user is even or odd.
// 2.    Write a program to print whether a number entered by user is greater than 100 or not.
// 3.    Write a program to print whether a number entered by user is multiple of 5 or not.
// 4.    Write a program to print roots of a quadratic equation.
// 5.    Write a program to find whether a student is pass or not.

#include <stdio.h>
#include <math.h>
int main()
{
    printf("Write a program to print whether a number entered by user is even or odd.\n");
    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);

    if (num % 2 == 0)
        printf("%d is even.\n\n", num);
    else
        printf("%d is odd.\n\n", num);

    printf("Write a program to print whether a number entered by user is greater than 100 or not.\n");

    int number;

    printf("Please enter a number: ");
    scanf("%d", &number);

    if (number < 100)
    {
        printf("Number is less than 100!\n\n");
    }
    else if (number == 100)
    {
        printf("Number is 100!!\n\n");
    }
    else
    {
        printf("Number is greater than 100!\n\n");
    }

    printf("Write a program to print whether a number entered by user is multiple of 5 or not.\n");
    int n;
    printf("Enter any number: ");
    scanf("%d", &n);
    if (n % 5 == 0)
    {
        printf("Number is divisible by 5\n\n");
    }
    else
    {
        printf("Number is not divisible by 5\n\n");
    }

    printf("Write a program to print roots of a quadratic equation.\n");
    double a, b, c, discriminant, root1, root2, realr, imgr;
    printf("Enter values of a, b and c of your equation.\n");
    scanf("%lf %lf %lf", &a, &b, &c);

    discriminant = b * b - 4 * a * c;

    if (discriminant > 0)
    {
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);
        printf("root1 = %lf and root2 = %lf\n\n", root1, root2);
    }
    else if (discriminant == 0)
    {
        root1 = root2 = -b / (2 * a);
        printf("Both roots are = %lf\n\n", root1);
    }
    else
    {
        realr = -b / (2 * a);
        imgr = sqrt(-discriminant) / (2 * a);
        printf("Root 1 = %.3lf + %.3lfi and Root 2 = %.3lf - %.3lfi\n\n", realr, imgr, realr, imgr);
    }

    printf("Write a program to find whether a student is pass or not.\n");

    int attendance, marks;
    printf("Enter Attendance in (%%) Percentage only.\n");
    scanf("%d", &attendance);
    printf("Enter Marks in (%%) Percentage only.\n");
    scanf("%d", &marks);
    if (attendance > 100 || marks > 100)
    {
        printf("Invalid Values\n\n");
    }
    
    else if (attendance >= 70 && marks >= 50)
    {
        printf("You are PASS!\n\n");
    }
    else
    {
        printf("You are FAIL!\n\n");
    }
    return 0;
}
