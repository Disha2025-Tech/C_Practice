#include <stdio.h>
int main()
{
    int x=1; // Variable declaration and initialisation // This is a single line comment

    /*This is a multiline comment
    It can have as many lines as comments as we want*/

    for(x=1; x<=10; x++)
    {
        printf("%d\n",x);
    }
    
    printf("\n Comment in C Language\nIf you want to write or explain something in the program while reading it and do not want it to get executed, or get any error, you can 'comment' by typing '//' before your statement.\nThis method is applicable only for one line comment.\neg- //This is my first C Program.\n\n\nFor a multiline comment, you have to type '/**/' before and after your comment.\neg- /*This is my first C Program.\n   Hello World!*/");

    return 0;
}