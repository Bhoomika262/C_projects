#include<stdio.h>

int main()
{
    int a,b,choice;
    printf("1) Addition \n2)Subtraction \n3)Multiplication \n4)Division ");
    printf("\nChoose the operation you would like to perform: ");
    scanf("%d",&choice);
    printf("\nNow enter two numbers: ");
    scanf("%d %d",&a,&b);
    switch(choice)
    {
        case 1:
         printf("The sum of %d and %d is %d",a,b,a+b);
         break;
        case 2: 
         printf("The subtraction of %d and %d is %d",a,b,a-b);
         break;
        case 3:
         printf("The multiplication of %d and %d is %d",a,b,a*b);
         break;
        case 4:
         printf("The quotient on dividing %d by %d is %d and the remainder is %d ",a,b,a/b,a%b);
         break;
        default: 
         printf("Choose valid options");
    }

}