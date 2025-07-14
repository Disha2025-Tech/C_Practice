#include <stdio.h>
int main()
{
    int x;
    printf("\nEnter a number:");
    scanf("%d",&x);

    if (x%2==0)
        {printf("\nYour number is an EVEN number\n\n");}
else 
    {printf("Your number is an ODD number\n\n");}

    return 0;
}