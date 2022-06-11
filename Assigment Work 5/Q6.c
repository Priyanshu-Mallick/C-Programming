/**
 Q6. Write a program to convert the given string, "GOOD MORNING" to "good morning"
 **/
#include <stdio.h>

int main()
{
    char str1[] = "GOOD MORNING";
    char str2[20];
    for (int i = 0; str1[i] != '\0'; i++)
    {
        if (str1[i] >= 65 && str1[i] <= 90)
            str2[i] = str1[i] + 32;
        else
            str2[i] = str1[i];
    }
    printf("%s\n", str1);
    printf("%s", str2);
    return 0;
}