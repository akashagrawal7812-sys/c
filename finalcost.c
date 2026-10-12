#include<stdio.h>
int main()
{
    float items[3]; 
    printf("enter price of item%d\n");
    for(int i=0;i<3;i++)
    {
        scanf("%f",&items[i]);
    }
    float gst[3];
    printf("enter gst of item%d\n");
    for (int j=0;j<3;j++)
    { 
        scanf("%f",&gst[j]);
    }
    float final_cost[3];
    for(int k=0;k<3;k++)
    {
        final_cost[k] = ((items[k])+(((items[k])*(gst[k]))/100));
    }
    for(int m=0;m<3;m++)
    {
        printf("final cost of item:%f\n" ,final_cost[m]);    
    }
    return 0;
}