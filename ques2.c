// Write a C program using switch case to display grade of students based on the total marks
// obtained by the student in five subjects:
// Here is the range of Grades:
// Marks >= 90 : Grade A
// Marks >= 70 && < 90 : Grade B
// Marks >= 50 && < 70 : Grade C
// Marks < 50 : Grade D
// Marks<50 : Fail

#include<stdio.h>
int main(){
    float m1,m2,m3,m4,m5;
    int percentage;
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
    switch (percentage)
    {
    case 90 ... 100 :
        printf("\nGRADE A\n");
        break;
    case 70 ... 89 :
        printf("\nGRADE B\n");
        break;
    case 50 ... 69 :
        printf("\nGRADE C\n");
        break;
    default:
        printf("\nGRADE D AND FAIL\n");
        break;
    }
    return 0;
}