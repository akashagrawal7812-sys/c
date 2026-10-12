//Write a C program to Count Vowels in a String//
#include<stdio.h>   
int main()    
{
    char str[100], vowel[] = {'a','e','i','o','u','A','E','I','O','U'};
    int i, len = 0,count=0;    
    printf("Enter a string: ");    
    scanf("%s", str);  
    while (str[len] != '\0')    
    {    
        len++;    
    }
    for (i=0;i<len;i++)
    {
        for(int j=0;j<10;j++)
        {
            if (str[i]==vowel[j])
            {
                count++;
            }
        }
    } 
    printf("%d",count);   
     
      
    return 0;  
}