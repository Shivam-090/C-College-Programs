// Practice Questions
// 1.  Write a program to print ASCII value of the character.
// 2. Write a program to swap two numbers without using third variable.
// 3. Write a program to add two integers entered by the user.
// 4.  Write a program to find the size of int, float, double and char

#include<stdio.h>
int main(){
   // 1.  Write a program to print ASCII value of the character.
   char c;
   printf("Enter Character: \n");
   scanf("%c",&c);
   printf("THE ASCII VALUE OF CHARACTER %c = %d\n",c,c);

   // 2. Write a program to swap two numbers without using third variable.
   int a,b;
   printf("Input the 1st number\n");
   scanf("%d",&a);
   printf("Input the 2nd number\n");
   scanf("%d",&b);
   a=a+b;
   b=a-b;
   a=a-b;
   printf("First Number is %d\n",a);
   printf("Second Number is %d\n",b);

   // 3. Write a program to add two integers entered by the user.
   int num1, num2,sum;
   printf("Enter First Number : \n");
   scanf("%d",&num1);
   printf("Enter Second Number : \n");
   scanf("%d",&num2);
   sum = num1 + num2;
   printf("The Sum of the two integers, %d + %d = %d\n",num1,num2,sum);
   
   // 4.  Write a program to find the size of int, float, double and char
   int q;
   float w;
   double e;
   char r;
   printf("The size of int is %d\n",sizeof(q));
   printf("The size of float is %d\n",sizeof(w));
   printf("The size of double is %d\n",sizeof(e));
   printf("The size of char is %d\n",sizeof(r));

   return 0;
}