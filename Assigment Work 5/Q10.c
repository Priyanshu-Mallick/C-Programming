#include<stdio.h>
void cpy(char a[]);
int main()
{
    char a[50];
    printf ("Enter a string\n");
    scanf("%[^\n]",a);
    cpy(a);
    return 0;
}
void cpy(char a[])
{
    int i; char a1[50];
    for (int i = 0; a[i] != '\0'; i++)
    {
            a1[i] = a[i];
    }
    printf("Main String: %s\n",a);
    printf("Copied String: %s\n",a1);
}