/**
Name- Priayanshu Mallick, Roll No - 13
Q7. WAP to sort a list of strings (lexicographically) by using
the "array of pointer" and dynamic memory allocation concept.
**/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void inorder(int n, char *x[]);
int main()
{
    char *x[20];
    int i, n=0;
    printf("Enter number of string:\n");
    scanf("%d",&n);
    printf("\n");

    for ( i = 0; i < n; i++)
    {
        printf("Enter the strings %d: ",i+1);
        x[i] = (char*)malloc(20*sizeof(char));
        scanf("%s",x[i]);
    }
    inorder(n,x);
    for ( i = 0; i < n; i++)
    {
        printf("%d %s\n",i+1,x[i]);
    }
    return 0;
}
void inorder(int n, char *x[])
{
    int i, j;
    char t[20];
    for ( i = 0; i < n-1; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (strcmp(x[i],x[j])>0)
            {
                strcpy(t,x[j]);
                strcpy(x[j],x[i]);
                strcpy(x[i],t);
            }
            return;
        }
    }
}