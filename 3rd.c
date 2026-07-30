// WAP to calculate average of 3 nos.

#include<stdio.h>
void main()
{
    int n1, n2, n3;
    printf("Enter 3 numbers : ");
    scanf("%d%d%d", &n1, &n2, &n3);
    printf("The total and average are %d and %d respectively.",n1+n2+n3, (n1+n2+n3)/3);
}
