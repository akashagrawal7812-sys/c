//Write a C program to Find the Length of a String Without strlen()//
#include<stdio.h>
int main()
{
    char str[100];
    int i = 0;
    printf("Enter a string: ");
    gets(str);
    while (str[i] != '\0')
    {
        i++;
    }
    printf("Length of the string is: %d", i);
    return 0;
}
