# include<stdio.h>
int main()
{
    int n,m,a;
    printf("enter no");
    scanf("%d",&n);
    m=1;
    while(m<=10)
    {
        a=n*m;
        m++;
        printf("%d*%d=%d\n",n,m,a);
    }
    return 0;        
}