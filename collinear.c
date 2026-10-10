#include<stdio.h>

int main()
{
    float a,b,c,d,e,f,m1,m2,p1,p2;
    printf("enter coordinate of 1st point: ");
    scanf("%f %f",&a , &b);
    printf("enter coordinate of 2st point: ");
    scanf("%f %f",&c,&d);
    printf("enter coordinate of 3st point: ");
    scanf("%f %f",&e,&f);
    m1= (d-b)/(c-a);
    p1=((m2*a) - b);
    m2= (d-f)/(c-e);
    p2=((m2*e) - f);
    if (m1==m2 &&p1==p2)
    {
        printf("collinear point");

    }
    else
        printf("not collinear");
    return 0;
}