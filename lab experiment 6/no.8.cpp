#include <stdio.h>
#include <string.h>

int main()
{
    char s1[100], s2[100]; 
    int result;

    printf("Enter the first string: ");
    scanf("%s", s1); 

    printf("Enter the second string: ");
    scanf("%s", s2);

    result = strcmp(s1, s2); 

    if (result == 0) 
    {
        printf("The strings are equal.\n");
    }
    else if (result > 0) 
    {
        printf("The first string is greater than the second string.\n");
    }
    else 
    {
        printf("The first string is less than the second string.\n");
    }

    return 0;
}

