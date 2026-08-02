// WAP to convert minutes to hours

#include<stdio.h>
void main()
{
    int m,n,h;
    printf("Enter minute(s): ");
    scanf("%d", &m);
    h=m/60;
    n=m%60;
    printf("%d minute(s) = %d hour(s) and %d minute(s)",m, h, n);
}
