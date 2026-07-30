// WAP to add, subtract, multiply, divide 2 nos

#include<stdio.h>
void main()
{
    int n1,n2,a;
    printf("Enter 1st no. : ");
    scanf("%d", &n1);
    printf("Enter 2nd no. : ");
    scanf("%d", &n2);
    a=n1+n2;
    printf("Sum = %d",a);
    printf("\nDifference of %d and %d is %d.",n1,n2,n1-n2);
    printf("\nProduct = %d",n1*n2);
    printf("\nThe quotient and remainder of dividing %d by %d are %d and %d respectively.",n1,n2,n1/n2,n1%n2);
}
