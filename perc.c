#include<stdio.h>
#include<conio.h>
int main()
{
    float b,s,p;
    printf("\nEnter the Buy Amount: ");
    scanf("%f",&b);
    printf("\nEnter the Sell Amount: ");
    scanf("%f",&s);
    p=s-b;
    printf("Buy= %f \nSell= %f \nYour Profit is: %f",b,s,p);
    getch();

}
