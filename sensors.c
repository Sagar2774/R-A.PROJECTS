#include<stdio.h>
void main()
{
int s1,s2,sum,substraction,product,division;
clrscr();
printf("Enter value for sensor 1: ");
scanf("%d",&s1);
printf("Enter value for sensor 2: ");
scanf("%d",&s2);
sum=s1+s1;
printf("The sum is: %d\n",sum);
substraction=s1-s2;
printf("The diffrence is %d\n",substraction);
product=s1*s2;
scanf("%d",&s1);
printf("Enter the value for sensor 2: ");
scanf("%d",&s2);
sum=s1+s1;
printf("The sum is: %d\n",sum);
substraction=s1-s2;
printf("The diffrence is %d\n",substraction);
product=s1*s2;
printf("The product is: %d\n",product);
division=s1/s2;
printf("The division is; %d\n",division);
getch();
}
