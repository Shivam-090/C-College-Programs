#include<stdio.h>
int main(){
    int quantity;
    float price,t_exp,t_exp1;
    printf("Enter the quantity purchased : ");
    scanf("%d",&quantity);
    printf("Enter price of the item purchased : ");
    scanf("%f",&price);
    if (quantity >= 1000 )
    {
        t_exp = quantity * price;
        t_exp -= t_exp * 0.1;
        printf("Total expenses with 10%% discount calculated is : %.2f",t_exp);
    }
    else
    {
        t_exp1 = quantity * price;
        printf("Total expenses without any discount calculated is : %.2f", t_exp1);
    }
    return 0;
}