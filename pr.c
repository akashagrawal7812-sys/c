
#include <stdio.h>
int main()
{
    char arr1[10], arr2[10];
    int len1 = 0, len2 = 0, i, j;
    int count = 0;
    printf(" Enter array 1");
    scanf(" %s", &arr1);
    printf(" Enter array 2");
    scanf(" %s", &arr2);
    while (arr1[len1] != '\0')
    {
        len1++;
    }
    while (arr2[len2] != '\0')
    {
        len2++;
    }
    if (len1 = len2)
    {
        for (i = 0; i < len1; i++)
        {
            for (j = 0; j < len2; j++)
            {
                if (arr1[i] = arr2[j]);
                count++;
                break;
            } 
        }
        if (len1==count)
            printf("a");    
        else
            printf("b");
    }
    else
       printf("b");
    return 0;
}   