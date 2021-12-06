// Write a program to print the address of variable. Use this address to print the value of the variable.

#include<stdio.h>
int main(){
    int a = 3;
    printf("Address of a = %u\n",&a);
    printf("Value of a = %d\n",*(&a));
    return 0;
}