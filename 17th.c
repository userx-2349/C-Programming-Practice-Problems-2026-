// WAP to check greatest among 3 Nos.
#include <stdio.h>
void main()
{
    int a, b, c;
    printf("Enter three numbers: ");
    scanf("%d%d%d", &a, &b, &c);
    if (a == b && b == c)
        printf("All the numbers are equal");
    else if (a > b && b == c)
        printf("1st no. %d is greatest and remaining two are equal", a);
    else if (a < b && b == c)
        printf("2nd and 3rd number are equal and greater than the 1st one");
    else if (b > c && a == c)
        printf("2nd no. %d is greatest and remaining two are equal", b);
    else if (b < c && a == c)
        printf("1st and 3rd number are equal and greater than the 2nd one");
    else if (c > b && b == a)
        printf("3rd no. %d is greatest and remaining two are equal", c);
    else if (c < b && b == a)
        printf("1st and 2nd number are equal and greater than the 3rd one");
    else if (a > b && a > c)
        printf("%d is greatest", a);
    else if (b > c)
        printf("%d is greatest", b);
    // else if (c > b && c > a)
    //    printf("%d is greatest", c);
    else
        printf("%d is greatest", c);
}
