/**
 Q2. Write a program to count the number of vowels, consonants and other characters
 in a string by the user
 **/
#include <stdio.h>

int main()
{
    int v = 0, c = 0, oc = 0, i;
    char str[100];
    printf("Enter a string\n");
    scanf("%[^\n]", str);
    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' )
        {
            v++;
        }
        else if(str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U' )
        {
            v++;
        }
        else if (str[i] >= 97 && str[i] <= 122 || str[i] >= 65 && str[i] <= 90)
        {
            c++;
        }
        else
        {
            oc++;
        }
    }
    printf("%d vowels and %d consonants and %d other characters are there in the string\n", v, c, oc);
    return 0;
}