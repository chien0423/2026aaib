// week12-6.cpp SOIT107_Base_004
#include <stdio.h>

int gcd(int a, int b)
{
    if (a == 0) return b;
    if (b == 0) return a;
    return gcd(b, a % b);
}

int main()
{
    printf("Enter two integers: \n");
    int a, b;


    if (scanf("%d%d", &a, &b) == 2) {

        printf("The greatest common divisor of %d and %d is %d\n", a, b, gcd(a, b));
    }

    return 0;
}
