#include<stdio.h>
#include<conio.h>
int main()
{
    float h,l,a;
    printf("\nEnter Length of base of Triangle: ");
    scanf("%f",&l);
    printf("\nEnter Height of base of Triangle: ");
    scanf("%f",&h);
    a=(l*h)/2.0;
    printf("\nArea of Triangel is: %0.2f",a);
    getch();
}
