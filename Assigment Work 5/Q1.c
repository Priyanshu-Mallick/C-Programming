/**
 Q1. WAP to read a sentence. Then count the number of words in the sentence
 **/
#include<stdio.h>

int main()
{
    char s[200];
    int count = 0, i;
 
    printf("Enter the string:\n");
    scanf("%[^\n]", s);
    for (i = 0;s[i] != '\0';i++)
    {
        if (s[i] == ' ' && s[i+1] != ' ')
            count++;    
    }
    printf("Number of words in given string are: %d\n", count + 1);
    return 0;
}