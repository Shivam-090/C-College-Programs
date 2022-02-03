// 1.	Write a program to increase the salary depending on the number of hours of work per day as follows:

// Hours of work per day	8	10	>=12
// Increase in salary	$50	$100	$150
// DODs
// a)	Write a structure to store the names, salary and hours of work per day of 10 employees in a company.
// b)	Print the name of all the employees along with their final salaries.


#include <stdio.h>

struct org
{
    char name[100];
    int hours;
    float salary;
};

int main()
{
    struct org employees[10];
    int n, i;
    printf("Enter the number of employees (<=10) : ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        printf("\nEnter %d Employee Name: ", i + 1);
        scanf("%s", &employees[i].name);
        printf("Number of hours of work per day (Whole Number Only): ");
        scanf("%d", &employees[i].hours);
        printf("Salary in Dollars: ");
        scanf("%f", &employees[i].salary);
    }
    for (i = 0; i < n; i++)
    {
        if (employees[i].hours == 8)
        {
            employees[i].salary = employees[i].salary + 50;
        }
        else if (employees[i].hours == 10)
        {
            employees[i].salary = employees[i].salary + 100;
        }
        else if (employees[i].hours >= 12)
        {
            employees[i].salary = employees[i].salary + 150;
        }
        else
        {
            employees[i].salary = employees[i].salary;
        }
    }
    printf("-------------- All Employees Details ---------------\n");
    for (i = 0; i < n; i++)
    {
        printf("\n\nEmployee %d\n Name : %s", i + 1, employees[i].name);
        printf("\nEmployee Salary : %.2f", employees[i].salary);
    }

    return 0;
}