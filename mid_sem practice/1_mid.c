#include <stdio.h>

int main()
{
    int physics, chemistry, mathematics;
    printf("Enter marks for Physics, Chemistry and Mathematics: ");
    scanf("%d %d %d", &physics, &chemistry, &mathematics);
    int total = physics + chemistry + mathematics;
    if ((physics >= 65 && chemistry >= 55 && mathematics >= 50)||(total >= 190 || (physics+mathematics >= 140)))
    {
        printf("Congratulations! You are eligible for the professional course.\n");
    }
    else
    {
        printf("Sorry, you are not eligible for the professional course.\n");
    }

    return 0;
}