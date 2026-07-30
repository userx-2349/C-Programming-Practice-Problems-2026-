// WAP to calculate area and circumference of a circle

#include<stdio.h>
void main()
{
    float r,a,c;
    printf("Enter the radius length : ");
    scanf("%f", &r);
    a=3.14*r*r;
    c=2*3.14*r;
    printf("Area = %.3f \nCircumference = %.2f",a,c);
}
