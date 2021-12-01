#include<stdio.h>
int main(){
    float m1,m2,m3,m4,m5,total,percentage;
    printf("Enter Marks of 1st subject : ");
    scanf("%f",&m1);
    printf("Enter Marks of 2nd subject : ");
    scanf("%f",&m2);
    printf("Enter Marks of 3rd subject : ");
    scanf("%f",&m3);
    printf("Enter Marks of 4th subject : ");
    scanf("%f",&m4);
    printf("Enter Marks of 5th subject : ");
    scanf("%f",&m5);
    percentage = ((m1 + m2 + m3 + m4 + m5)/500)*100;
    if (m1 > 100 || m2 > 100 || m3 > 100 || m4 > 100 || m5 > 100)
    {
        printf("Enter values between 0 to 100");
        return 0;
    }
    else if (percentage >= 60 )
    {
        printf("First Division");
    }
    else if (percentage >= 50 && percentage <=59 )
    {
        printf("Second Division");
    }
    else if (percentage >= 40 && percentage <=49 )
    {
        printf("Third Division");
    }
    else if (percentage < 40)
    {
        printf("Choraa Fail");
    }
    else{
        printf("Invalid Entries");
    }
    
    return 0;
}