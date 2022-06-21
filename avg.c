#include<stdio.h>
#include<conio.h>
int main()
{
    int num1,num2,num3,avg;
    printf("\nEnter First Number: ");
    scanf("%d",&num1);
    printf("\nEnter Second Number: ");
    scanf("%d",&num2);
    printf("\nEnter Third Number: ");
    scanf("%d",&num3);
    avg=(num1+num2+num3)/3;
    printf("Avrage of %d , %d , %d is: %d ",num1,num2,num3,avg);
    getch();
}
