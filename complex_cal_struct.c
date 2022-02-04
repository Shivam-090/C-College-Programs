#include <stdio.h>
#include <stdlib.h>
struct complex
{
    int real, img;
};

int main()
{
    int choice, x, y, z;
    struct complex a, b, c;

    while (1)
    {
        printf("Press 1 to add two complex numbers.\n");
        printf("Press 2 to subtract two complex numbers.\n");
        printf("Press 3 to exit.\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice == 3)
        {
            exit(0);
        }

        if (choice >= 1 && choice <= 2)
        {
            printf("Enter a and b where a + ib is the first complex number.");
            printf("\na = ");
            scanf("%d", &a.real);
            printf("b = ");
            scanf("%d", &a.img);
            printf("Enter c and d where c + id is the second complex number.");
            printf("\nc = ");
            scanf("%d", &b.real);
            printf("d = ");
            scanf("%d", &b.img);
        }
        if (choice == 1)
        {
            c.real = a.real + b.real;
            c.img = a.img + b.img;

            if (c.img >= 0)
            {
                printf("Sum of the complex numbers = %d + %di\n", c.real, c.img);
                break;
            }
            else
            {
                printf("Sum of the complex numbers = %d %di\n", c.real, c.img);
                break;
            }
        }
        else if (choice == 2)
        {
            c.real = a.real - b.real;
            c.img = a.img - b.img;

            if (c.img >= 0)
            {
                printf("Difference of the complex numbers = %d + %di\n", c.real, c.img);
                break;
            }
            else
            {
                printf("Difference of the complex numbers = %d %di\n", c.real, c.img);
                break;
            }
        }
        else
        {
            printf("Invalid choice.");
            break;
        }
    }
    return 0;
}