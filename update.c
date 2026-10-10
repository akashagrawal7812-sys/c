#include<stdio.h>
int main()
{
    int array[100];
    int i,n, pos,val;
    printf("enter no of element");
    scanf("%d",&n);
    printf("enter array");
    for (i=0;i<n;i++)
    {
        scanf("%d",&array[i]);
    }
    printf("enter position at which you need to update element");
    scanf("%d",&pos);
    if (pos>0 || pos<=n)
    {
        printf("enter updated value");
        scanf("%d",&val);
        array[pos-1]=val;
        printf("value updated");

    }
    else
    {
        printf("invalid position");

    }
    for()
    return 0;
}