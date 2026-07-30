// WAP to calculate area and perimeter of a rectangle

#include<stdio.h>
void main()
{
    int l,b,a,p;
    printf("Enter the length and breadth: ");
    scanf("%d%d", &l, &b);
    a=l*b;
    p=2*(l+b);
    printf("Area = %d \nPerimeter = %d", a, p);
}
