// WAP to check greatest between 2 Nos.

#include <stdio.h>
void main()
{
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d%d", &a, &b);
    if (a > b)
        printf("%d is the greatest", a);
    else if (a < b)
        printf("%d is the greatest", b);
    else
        printf("Both are equal");
}
