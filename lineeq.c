#include<stdio.h>

int main()
{
    float a,b,c,d,m,p;
    printf("enter coordinate of 1st point: ");
    scanf("%f %f",&a , &b);
    printf("enter coordinate of 2st point: ");
    scanf("%f %f",&c,&d);
    m= (d-b)/(c-a);
    p=((m*a) - b);
    printf("\nequation of line: y=%fx + %f\n" , m,p);
    return 0;
}
