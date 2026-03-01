// [INCOMPLETE] - Logic for string indexing is broken, need to fix

#include <stdio.h>
#include <string.h>
#include "../../my_signature.h"


void count(char c)
{
    char s[100];
    printf("Please enter the string:\n");
    scanf("%s",&s);

    printf("The string you entered is: %s\n",s);
    printf("The length of the string is %zu\n",strlen(s));

    int i=0;
    for (;s[i]==c;i++)
    { }
    printf("The number of times the char is in string s is: %d",i);
}