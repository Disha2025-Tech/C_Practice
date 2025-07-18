#include <stdio.h>
long long int mul(long long int,long long int,long long int);
int main()
{
    long long int x=28384;
    long long int y=378;
    long long int z=783;

    printf("a*b*c=%lld\n",mul(x,y,z));

    return 0;
}

long long int mul(long long int a, long long int b, long long int c)
{
    printf("a=%lld\n",a);
    printf("b=%lld\n",b);
    printf("c=%lld\n",c);
    return a*b*c;
}