#include<stdio.h>
int main(){
    int income;
    float tax;
    printf("Enter your income : ");
    scanf("%d",&income);
    if(income<250000){
        printf("Less than 2.5\n");
    }
    else if(income>250000 && income<500000){
        printf("Tax is 5 \n");  
        tax=tax + 0.05 * (income-250000);
    }
    else if(income>500000 && income<1000000){
        printf("Tax is 20 \n");
        tax=tax+tax + 0.05 * (500000-250000);
        tax=tax + 0.2 * (income-500000);
    }
    else{
        printf("Tax is 30 \n");
        tax=tax+tax + 0.05 * (500000-250000);
        tax=tax + 0.2 * (1000000-500000);
        tax=tax + 0.3 * (income-1000000);
    }
    printf("\nTax to be paid is %f", tax);
    return 0;
}
