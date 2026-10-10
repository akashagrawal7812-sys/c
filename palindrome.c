// palindrome//
# include<stdio.h>
int main()
{
    int p,r,rev,temp;
    printf(" enter palindrone");
    scanf("%d",&p);
    temp = p;
    rev =0;
    while (p != 0)
    {
        r= p%10;
        p= p/10;
        rev = rev*10+r;

    }
    if (temp==rev)
        printf("this is palindrome");
    else
        printf("this is not a palindrone");
    return 0;        
}