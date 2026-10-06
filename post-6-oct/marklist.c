#include<stdio.h>
int main()
{
 int rollno;
 float mark1, mark2, mark3, total, average;
 printf("Enter rollno ");
 scanf("%d", &rollno);
 printf("Enter marks of three subjects");
 scanf("%f, %f, %f", &mark1, &mark2, &mark3);
 total = mark1 + mark2 + mark3;
 average = total/3;
 printf("/n rollno = %d", rollno);
 printf("mark1 = %f\n", mark1);
 printf("mark2 = %f\n", mark2);
 printf("mark3 = %f\n", mark3);
 printf("total marks = %f \n", total);
 printf("average marks = %f \n", average);
}
