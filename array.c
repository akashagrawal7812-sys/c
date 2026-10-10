#include<stdio.h>
int main()
{
    int array[5]={100,254,867,965,456} , reve[5];
    for (int i=0;i<5;i++)
    {
        
        reve[i] = array[4-i];

    }
    for (int i=0;i<5;i++)
    {
        printf("%d\n",reve[i]);
    }    
    return 0;
}