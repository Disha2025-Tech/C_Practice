#include <stdio.h>
int multiply(int,int);
int main()
{
    int x=26;
    int y=73;

    printf("This is main function\n");
    printf("a*b=%d\n",multiply(x,y));

    return 0;
}

int multiply(int a, int b)
{
    printf("a=%d\n",a);
    printf("b=%d\n",b);
    return a*b;
}