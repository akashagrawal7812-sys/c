#include <stdio.h>
int main() 
{
    int i, j, space;
    int value;
    for(i = 0; i < 5; i++)
    {
    for(space = 0; space < 5 - i; space++)
    {
        printf(" ");
    }
    value = 1;
    for(j = 0; j <= i; j++)
    {
    printf("%d ", value);
    value = value * (i - j) / (j + 1);
    }
    printf("\n");
    }
    return 0;
}

