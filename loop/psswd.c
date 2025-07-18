#include <stdio.h>
#include <string.h>
int main()
{
   char a[8];
   
   printf("Enter Password:");
   scanf("%s",a);
   while(strcmp(a,"TMKOC")!=0)
   {
    printf("\nWrong Password\nTry Again\n\n");
    printf("Enter Password:");
    scanf("%s",a);
   }



    return 0;
}