#include<stdio.h>
int main(){
int num1,num2;
int choice;
printf("Enter a two numbers \n");
scanf("%d%d",&num1,&num2);
printf("Enter A Option\n1.Addition\n2.Subtraction\n3.Multiplication\n4.Division\n");
scanf("%d",&choice);
    
    switch (choice)
    {
    case 1: 
    printf("Addition is : %d\n",num1+num2);
        break;
    case 2:
    printf("Addition is : %d",num1-num2);
        break;
    case 3:
    printf("Addition is : %d",num1*num2);
        break;

    case 4:
    printf("Addition is : %d",num1/num2);
        break;


    default: printf("Invalid Choice!");
        break;
    }
    return 0;
}