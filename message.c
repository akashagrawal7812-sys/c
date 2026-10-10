#include<stdio.h>'

int main()
{
    int a,b,c;
    printf("enter three integer");
    scanf("%d %d %d",&a,&b,&c);
    if (b==(a+c))
    {
        printf("thanks");
    }
    else if (a==(b+c)) 
    {
        printf("sorry");
    }
    else if (c==(b+a))
    {
        printf("la la la la la");
    }   
    else
       printf("sad");
    
    return 0;
}
