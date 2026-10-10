#include<stdio.h>
int main()
{
    int array[100];
    int count=0 ,i=0;

    for (i=0;i<100;i++)
    {
        printf("enter array");
        scanf("%d",&array[i]);
        count= count+1;
        if (array[i] == 50)
            break;
        
    }
    printf("%d",count);
    return 0;
}