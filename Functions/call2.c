#include <stdio.h>
int add(int, int);
int main()
{
    int x=65;
    int y=35;
    
    printf("This is main function\n");
    printf("Addition=%d\n", add(x,y));
    return 0;
}

int add(int a, int b)
{
    printf("\na=%d\n",a);
    printf("b=%d\n",b);
    return a+b;
}