#include <stdio.h>

int main() 
{
    char str[100]; // Assuming a maximum string length of 100 characters
    printf("Enter a string: ");
    gets(str);
    printf("\nYou entered: %s", str);
    
    return 0;
}
