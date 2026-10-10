#include<stdio.h>
int main()
{
    int array[5], reve[5];
    for (int i=0;i<5;i++)
    {
        printf("enter array");
        scanf("%d",&array);
        
    }
    for (int i=0;i<5;i++)
    {
         reve[i] = array[4-i];
         printf("%d\n",reve[i]);
    }    
    return 0;
}