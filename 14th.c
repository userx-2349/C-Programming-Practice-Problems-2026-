// WAP to check a number is positive or not
#include <stdio.h>
void main()
{
    int a;
    printf("Enter a number: ");
    scanf("%d", &a);
    if (a == 0)
        printf("%d is a Neutral number.", a);
    else if (a > 0)
        printf("%d is a Positive number.", a);
    else
        printf("%d is a Negative number.", a);
}
