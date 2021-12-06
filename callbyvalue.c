#include<stdio.h>
int sum(int,int);
int main(){
    int x = 4;
    int y = 1;
    printf("The value of a and b is %d",sum(x,y));
    return 0;
}

int sum(int a, int b){
    return a + b;
}