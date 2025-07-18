#include <stdio.h>
int add(int,int,int);
int main()
{
    int x;
    int y;
    int z;

    printf("Enter first number:");
    scanf("%d",&x);

    printf("Enter second number:");
    scanf("%d",&y);

    printf("Enter third number:");
    scanf("%d",&z);

    printf("Addition of the three numbers=%d\n",add(x,y,z));
    return 0;
}

int add(int a, int b, int c)
{
    return a+b+c;
}