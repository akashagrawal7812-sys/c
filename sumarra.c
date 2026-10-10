#include<stdio.h>
int main()
{
    int array[5]={1,2,3,4,5} , reverse[5];
    for (int i=4;i>=0;i--)
    {
        
        reverse[4-i] = array[i];

    }
    printf("%d",reverse);
    return 0;
}