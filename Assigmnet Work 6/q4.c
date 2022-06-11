/**
Name- Priayanshu Mallick, Roll No - 13
Q4. WAP that will read a stringa and reverse the string using function
void stringReverse(char *,int)
**/
#include<stdio.h>
#include<string.h>
void rev(char *);
int main()
{
    char a[10], n, i;
    printf("Enter a string\n");
    scanf("%[^\n]",a);
    rev(a);
    return 0;
}
void rev(char *a)
{
    int len;
    len = strlen(a);
    int rev[10], i, j;
    j = len-1;
    for ( i = 0; i < j-1; i++)
    {
        rev[i]=a[j];
        j--;
    }
    rev[i]='\0';
    printf("%s",rev);
}
