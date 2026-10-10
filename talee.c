#include<stdio.h>
int main()
{
    int n,m,a;
    m=1;
    for(n=1;n<=10;n++)
    {
        printf("table of :%d \n" ,n);
        m=1;
        while(m<=10)
        {
            a =n*m;
            printf("%d*%d=%d \n",n,m,a);
            m=m+1;
        }    
    }
    return 0;        
}