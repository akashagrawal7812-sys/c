# include<stdio.h>
int main()
{
    int arm,r,sum,temp;
    printf(" enter arm");
    scanf("%d",&arm);
    temp = arm;
    sum =0;
    while (arm != 0)
    {
        r= arm%10;
        arm= arm/10;
        sum = sum + r*r*r;

    }
    if (temp==sum)
        printf("this is arm");
    else
        printf("this is not a arm");
    return 0;        
} 