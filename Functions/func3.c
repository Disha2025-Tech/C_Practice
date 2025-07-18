#include <stdio.h>
long long int mul(long long int,long long int,long long int);
int main()
{
    long long int x;
    long long int y;
    long long int z;

    printf("a*b*c=%lld\n",mul(x,y,z));

    return 0;
}

long long int mul(long long int a, long long int b, long long int c)
{
    printf("Enter first number:");
    scanf("%lld",&a);
    
    printf("Enter second number:");
    scanf("%lld",&b);

    printf("Enter third number:");
    scanf("%lld",&c);

    return a*b*c;
}