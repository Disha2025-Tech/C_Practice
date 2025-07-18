#include <stdio.h>

int add(int a,int b){
    printf("this is add function\n");
    printf("value of a=%d\n",a);
    printf("value of b=%d\n",b);

    return a+b;
}

int main()
{
    int num1=2;
    int num2=4;
    int result;
    
    printf("This is main function\n");
    printf("\nAddition=%d\n",add(num1,num2));

    return 0;
}

