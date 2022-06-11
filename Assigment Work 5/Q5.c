/**
 Q5. Write a program that will check the given string is palindrome or not
 **/
#include <stdio.h>
#include <string.h>
int main()
{
    char str[50], rev[50];
    int i, j, len;
    printf("Enter a string\n");
    scanf("%[^\n]", str);
    // finding the length of the string
    len = strlen(str);
    j = len - 1;

    // reversing the string by swapping
    for (i = 0; i < len; i++)
    {
        rev[i] = str[j];
        j--;
    }
    // checking palindrome or not
    int flag;
    for (i = 0; str[i] != '\0'; i++)
    {
        if (rev[i] == str[i])
            flag = 1;
        else
            flag = 0;
    }
    if (flag == 1)
        printf("It's a palindrome\n");
    else
        printf("It is not a palindrome\n");
    return 0;
}