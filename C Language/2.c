// Program to display the message 5 times as displayed below using for loop and continue statement.

#include <stdio.h>
int main()
{
    int i;
    for (i = 1; i <= 6; i++)
    {
        if (i == 6)
        {
            continue;
        }
        printf("Hello, this is %d iteration\n", i);
    }

    return 0;
}
