#include<stdio.h>
#include<conio.h>
int main()
{
    float p,r,t,si;
    printf("\nEnter the Amount: ");
    scanf("%f",&p);
    printf("\nEnter the Rate of Intrest: ");
    scanf("%f",&r);
    printf("\nEnter the Time Duration: ");
    scanf("%f",&t);
    si=(p*r*t)/100;
    printf("\nSimple Intrest is: %f",si);
    getch();
}
