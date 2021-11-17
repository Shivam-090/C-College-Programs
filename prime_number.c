#include<stdio.h>
int main()
{
   int i, num, j = 0;
   printf("Enter a number: \n");
   scanf("%d", &num);
   for(i=1; i<=num; i++)
   {
      if(num%i==0)
      {
         j++;
      }
   }
   if(j==2)
   {
      printf("Prime number");
   }
   else
   {
      printf("Not a prime number");
   }
   return 0;
}
