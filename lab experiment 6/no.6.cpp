#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    int alp, dig, spl, i; 
    alp = dig = spl = i = 0; 
    
    printf("Enter a string: ");
    gets(str); 
    while(str[i] != '\0')
    {
        if((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z'))
        {
            alp++;
        }
        else if(str[i] >= '0' && str[i] <= '9')
        {
            dig++;
        }
        else
        {
            spl++;
        }
        i++;
    }
    printf("Number of alphabets = %d\n", alp);
    printf("Number of digits = %d\n", dig);
    printf("Number of special characters = %d\n", spl);
    
    return 0;
}

