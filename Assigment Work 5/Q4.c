/**
 Q4. Write a program to input a string and reverse it
 **/
#include <stdio.h>
#include <string.h>
int main()
{
    char str[50], rev[50];
    int i, j, len;
    printf("Enter a string\n");
    scanf("%s", str);
    // finding the length of the string
    len = strlen(str);
    j = len - 1;

    // reversing the string by swapping
    for (i = 0; i < len; i++)
    {
        rev[i] = str[j];
        j--;
    }
    printf("String After Reverse: %s\n", rev);
    return 0;
}