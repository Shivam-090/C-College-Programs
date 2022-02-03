#include<stdio.h>
int product(int a, int b);
int main(){
    int a, b, result;
    printf("Enter 2 number: ");
    scanf("%d%d",&a,&b);
    result = product(a,b);
    printf("Product is %d",result);
    return 0;
}

int product(int a, int b){
    if (b > a)
    {
        return product(b,a);
    }
    else if (b!=0)
    {
        return (a + product(a,b-1));
    }
    else{
        return 0;
    }   
}