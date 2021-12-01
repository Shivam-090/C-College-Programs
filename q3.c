#include<stdio.h>
int main(){
    int angle1, angle2, angle3, total;
    printf("Input angle 1 : ");
    scanf("%d",&angle1);
    printf("Input angle 2 : ");
    scanf("%d",&angle2);
    printf("Input angle 3 : ");
    scanf("%d",&angle3);
    total = angle1 + angle2 + angle3;
    if (angle1 > 180 || angle2 > 180 || angle3 > 180)
    {
        printf("Enter values of angles between 0 to 180 only");
    }
    
    else if (total == 180)
    {
        printf("Triangle is valid, total angle is %d",total);
    }
    else
    {
        printf("Invalid, because total angle, that is, %d is more than 180 degree",total);
    }
    return 0;
}