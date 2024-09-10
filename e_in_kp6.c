#include<stdio.h>
void main(){
    printf("SIMPLE CALACULATOR\n");
int a, b, choice;

printf("Enter a Number:    ");
scanf("%d",&a);
printf("Enter b Number:    ");
scanf("%d",&b);
printf("1.Add\n2.subtract\n3.Multiplication\n4.division\nEnter a choice>>    ");
scanf("%d",&choice);
printf("OPTIONS");
switch (choice)
{
case 1:printf("The answer is: %d",a+b);break;
case 2:printf("The answer is: %d",a-b);break; 
case 3:printf("The answer is: %d",a*b);break; 
case 4:printf("The answer is: %d",a/b);break; 
default:printf("Invalid Choice! Try again..");   
}
}