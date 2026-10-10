# include<stdio.h>
int main()
{
    int a,b,c;
    printf("enter three no:");
    scanf("%d %d %d ",&a,&b, &c);
    if (a>b && a>c)
        {
            if (b>c)
               printf("b is second largest no") ;
            else
                printf("c is second largest no") ;  
        }
    else if (b>c)  
             {
                if (a>c)
                    printf("a is second largest no") ;
                else
                    printf("c is second largest no") ; 
             }
         else 
             printf("b is second largest no") ;
return 0;                              

}