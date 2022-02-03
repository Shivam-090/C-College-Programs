#include<stdio.h>
int checksumprime(int n);
int main(){
    int n, flag = 0;
    printf("Enter a number:");
    scanf("%d",&n);
    for (int i = 2; i <= n / 2 ; ++i)
    {
        if (checksumprime(i) == 1)
        {
            if (checksumprime(n-i) == 1)
            {
                printf("%d = %d + %d\n", n, i, n - i);
                flag = 1;
            }
        }
    }
    if (flag == 0)
    {
        printf("Cant expressed in sum form");
    }
    return 0;
}
int checksumprime(int n){
    int isPrime = 1;
    if (n == 0 || n == 1)
    {
        isPrime = 0;
    }
    else{
        for (int i = 2; i <= n / 2; ++i)
        {
            if (n % i == 0)
            {
                isPrime = 0;
                break;
            }
        }
    }
    return isPrime;
}