/**
 Q3. Write a program to input two strings and then concatenate
 **/
#include<stdio.h>
#include<string.h>
int main()
{
    char str1[50], str2[50];
    printf("Enter a 1st string\n");
    scanf("%[^\n]", str1);
    printf("Enter a 2nd string\n");
    scanf(" %[^\n]", str2);
    printf("After concatenaion your string is: %s",strcat(str1,str2));
    return 0;
}