#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char str[100];
    int i; 
    printf("Enter a string: "); 
    scanf("%s", str); 
    printf("The original string is: %s\n", str);
    for(i = 0; i < strlen(str); i++) 
    {
        if(islower(str[i])) 
        {
            str[i] = toupper(str[i]); 
        }
        else if(isupper(str[i])) 
        {
            str[i] = tolower(str[i]);
        }
    }
    printf("The converted string is: %s\n", str); 
    return 0;
}

