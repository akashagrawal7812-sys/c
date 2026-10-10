// triangle//
# include<stdio.h>
int main()
{
    int a,b,c , d ,as,bs,cs;
    printf("enter three sides:");
    scanf("%d %d %d ",&a,&b, &c);
    as=a*a;
    bs=b*b;
    cs=c*c;
    if ((a+b > c) &&(b+c>a) && (c+a>b))
       {
        d=0;
        printf(" \n This is a triange \n");
        if (a==b && b==c)
            printf("equilateral triangle ");
        else if (a!=b && b!=c && c!=a)
                 printf("scalane triagle")  ;
        else 
            printf("isosceles triangle");           
       }
    else
    {
        d=1;
        printf(" \n not a triangle\n");
    }
    if  ((a+b > c) &&(b+c>a) && (c+a>b))
    {
        if ((as==bs+cs) || (cs==bs+as) || (bs==as+cs))
            printf("\nright angle triangle\n ");
        else if((as>bs+cs)||(cs>bs+as)||(bs>as+cs))   
                printf("\nobtuse angle triangle\n");
        else
            printf("\nacute angled triangle\n");        
    }
    return 0; 
}