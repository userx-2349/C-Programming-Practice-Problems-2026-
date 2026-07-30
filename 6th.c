// WAP to convert seconds to minutes

#include<stdio.h>
void main()
{
    int s,m,sec;
    printf("Enter second(s): ");
    scanf("%d", &s);
    m=s/60;
    sec=s%60;
    printf("%d second(s) = %d minute(s) and %d second(s)", s,m,sec);
}
