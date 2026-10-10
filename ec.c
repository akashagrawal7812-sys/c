#include<stdio.h>
int main()
{
    char n,a,m;
    float u,b,s;
    float t =0;
    s=5;
    a ='A' ;
    n ='N';
    m = 'M';
    printf("enter unit");
    scanf("%f",&u);
    if (u <= 100)
        b= u*2;
    else if (u<=200)
             b= u*2 +(u-100);
         else if (u <= 500)
                  b = u*2 +(u-11) +(u-200)*2;
              else
                  b = u*2 +(u-11) +(u-200)*2 +(u-500)*3;
    if (b > 5000)
        s = (b*s)/100;
    else
        s = 0;       
    t = b+s;
    printf ("\n CONSUMER NAME:%c \n Address:%c \nBilling Month:%c \n" , n,a,m );                   
    printf("\nUnit Consume: %f\nBill Charge:%f \nSurcharge:%f \nFinal Bill:%f\n ",u,b,s,t);  
    return 0;
}