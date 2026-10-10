#include<stdio.h>
int main()
{
    float items[3];
    for(int i=0;i<3;i++)
    {
        printf("enter price of item%d\n",++i);
        scanf("%f",&items[i]);
        i=i-1;
    }

    float gst[3];
    for (int j=0;j<3;j++)
    {
        printf("enter gst of item%d\n",++j);
        scanf("%f",&items[j]);
        j=j-1;
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