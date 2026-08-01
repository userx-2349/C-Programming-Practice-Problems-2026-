// WAP to convert seconds to hours

#include<stdio.h>
void main()
{
    int s,h,n,m,sec;
    printf("Enter second(s): ");
    scanf("%d", &s);
    h=s/3600;
    n=s%3600;
    m=n/60;
    sec=n%60;
    printf("%d second(s) = %d hour(s) %d minute(s) %d second(s)", s,h,m,sec);
}
