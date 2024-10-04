#include<stdio.h>
int main(){
    int rollNo;
    char name[70];
    float Hindi, English,Maths;
    printf("Enter you RollNo: ");
    scanf("%d",&rollNo);
    printf("Enter you Name: ");
    scanf("%s",&name);
    printf("Enter you Hindi Marks: ");
    scanf("%f",&Hindi);
    printf("Enter you English Marks: ");
    scanf("%f",&English);
    printf("Enter you Maths Marks: ");
    scanf("%f",&Maths);
    float totalMarks = Hindi+English+Maths;
    printf("totla Maks is %2f\n",totalMarks);
    float marks = totalMarks/3;
    printf("The total Percentage is:%2f",marks);   
    return 0;
    
}