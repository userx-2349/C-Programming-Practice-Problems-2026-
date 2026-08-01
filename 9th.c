// WAP to calculate area and volume of a cuboid

#include<stdio.h>
void main()
{
    float l,b,h,a;
    printf("Enter length, breadth and height respectively: ");
    scanf("%f%f%f", &l, &b, &h);
    a=2*((l*b)+(l*h)+(h*b));
    printf("Area = %.2f \nVolume = %.2f",a,l*b*h);
}
