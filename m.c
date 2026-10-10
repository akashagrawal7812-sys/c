#include <stdio.h>

int main()
{
    char str[100];
    int i, length = 0, flag = 1;
    printf("Enter a word: ");
    scanf("%s", str);

    while (str[length] != '\0')
    {
        length++;
    }

    for (i = 0; i < length / 2; i++)
    {
        if (str[i] != str[length - i - 1])

        {
            flag = 0;
            break;
        }
    }

    if (flag == 1)
    {
        printf("Palindrome string");
    }
    else
    {
        printf("Not a palindrome string");
    }

    return 0;
}