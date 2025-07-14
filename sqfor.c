#include <stdio.h>
int main()
{
    int x,y,z=1;
    printf("Enter a number:");
    scanf("%d",&y);

    for(x=1;x<=2;x++)
    z=z*y;
    {printf("%d\n",z);}


    return 0;
}