#include<stdio.h>
int main(){
    int n, i;
    float marks[100], sum = 0.0, avg = 0;
    printf("Enter Number of elements :");
    scanf("%d",&n);
    for (int i = 0; i < n; i++)
    {
        printf("Enter %d Number : ", i+1);
        scanf("%f",&marks[i]);
        sum += marks[i];
    }

    avg = sum / n;
    printf("Average of %d elements is %.2f", n, avg);
    return 0;
}