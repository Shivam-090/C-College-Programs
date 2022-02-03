#include<stdio.h>
int main(){
    int i = 5;
    int* ptr = &i;
    printf("The value of i is %d\n",i);
    printf("The value of ptr is %u\n",ptr);
    printf("The address of 1 is %u\n",&i);
    ptr++; // Addition of Arrays
    printf("\n");
    printf("The value of ptr is %u\n",ptr);
    printf("The address of 1 is %u\n",&i);
    ptr--; // Subtraction of Arrays
    printf("\n");
    printf("The value of ptr is %u\n",ptr);
    printf("The address of 1 is %u\n",&i);

    return 0;
}