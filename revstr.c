//Write a C program to Reverse a String//
#include<stdio.h>   
int main()    
{    
    char str[100] ,temp;    
    int i, len = 0;    
    printf("Enter a string: ");    
    scanf("%s",&str) ;  
    while (str[len] != '\0')    
    {    
        len++;    
    }    
     
    if (len%2==0)
    {
        for (i = 0; i < len/2; i++)
        {
            temp = str[i];
            str[i] = str[len - 1 - i];
            str[len - 1 - i] = temp;
        }
    }
    else 
    {
        for (i = 0; i < (len+1)/2; i++)
        {
            temp = str[i];
            str[i] = str[len - 1 - i];
            str[len - 1 - i] = temp;
        }
    }
    printf("reverse string:\n");
    for(i=0;i<len;i++)
    {
        printf("%c",str[i]);
    }    
    return 0;  
}