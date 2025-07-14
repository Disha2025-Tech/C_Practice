#include <stdio.h>
int main()
{
    long long int i,x=1;
    for (i=1;i<=10;i++)
    {
        x=x*i;
        printf("%lld\n",x);
    }

    return 0;
}