//Write a C program to calculate the sum of positive and negative elements seperately in an array of 10 numbers
#include<stdio.h>
int main()
{
    int arr[10],i,ps=0,ns=0;
    printf("enter 10 no");
    for ( i=0;i<10;i++)
    {
        scanf("%d",&arr[i]);
    } 

    for(i=0;i<10;i++)
    {
        if(arr[i]>0)
        {
            ps+=arr[i];
        }
        else
        {
            ns+=arr[i];
        }
    }

    printf("sum of positive elements is %d\n",ps);
    printf("sum of negative elements is %d\n",ns);
    
    return 0;
}