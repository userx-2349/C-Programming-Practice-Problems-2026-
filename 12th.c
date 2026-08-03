// WAP to convert seconds to days

#include<stdio.h>
void main()
{
    int s,d,n,h,o,m,x;
    printf("Enter second(s): ");
    scanf("%d", &s);
    d=s/86400;
    n=s%86400;
    h=n/3600;
    o=n%3600;
    m=o/60;
    x=o%60;
    printf("%d second(s) = %d day(s), %d hour(s), %d minute(s) and %d second(s)",s,d,h,m,x);
}
