// 2. A character is entered through keyboard. Write a C program and its algorithm to determine
// whether the character entered is a capital letter, a small case letter, a digit or a special
// symbol using switch case. The following table shows the range of ASCII values for various
// characters.

#include <stdio.h>
int main()
{
    char ch;
    int num;
    printf("Enter a char : ");
    scanf("%c", &ch);
    num = ch;
    switch (num)
    {
    case 65 ... 90:
        printf("%c is a Capital letter", ch);
        break;
    case 97 ... 122:
        printf("%c is a small letter", ch);
        break;
    case 48 ... 57:
        printf("%c is a Number", ch);
        break;
    default:
        printf("%c is a special symbols", ch);
        break;
    }
    return 0;
}