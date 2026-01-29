#include <stdio.h>
#include "../../my_signature.h"

void reverse_str(char s[])
{
    int n;
    printf("Please enter the length of string again:\n");
    scanf("%d",&n);

    printf("please enter the string:\n");
    scanf("%s",s);

    for (int i=0;i<n;i++)
    {
        s[i]=s[n-i-1];
    }
    printf("The reversed string is: %s", s);
}

int main()
{

    int n;
    printf("Please enter the length of string:\n");
    scanf("%d",&n);

    char s[n];
    printf("Please enter the string");
    scanf("%s",&s);

    reverse_str(s[n]);

    signature();

    return 0;

}