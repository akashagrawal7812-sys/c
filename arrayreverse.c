//Write a C program to read 10 numbers and display them in reverse order
#include<stdio.h>
int main()
{
    int arr[10] ,i;
    printf("enter 10 no");
    for ( i=0;i<10;i++)
    {
        scanf("%d",&arr[i]);
    } 

    for(i=0;i<10;i++)
    {
        printf("%d ",arr[i]);
    }

    printf("\n");

    for ( i=0; i < 5; i++)
    {
        int temp=0;
        temp=arr[i];
        arr[i]=arr[10-i-1];
        arr[10-i-1]=temp;
    }
    
    for(i=0;i<10;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}