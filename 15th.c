// WAP to check a number is even or not
#include <stdio.h>
void main()
{
    int a;
    printf("Enter a number: ");
    scanf("%d", &a);
    if (a == 0)
        printf("Neutral number");
    else if (a % 2 == 0)
        printf("Even number");
    else
        printf("Odd number");
}
