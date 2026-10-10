//team//
# include<stdio.h>
int main()
{
    int m1,m2,m3,m4,m5,t,h,l;
    float a;
    printf("enter score of all 5 matches");
    scanf("%d %d %d %d %d",&m1,&m2,&m3,&m4,&m5);
    t= m1+m2+m3+m4+m5;
    a= (m1+m2+m3+m4+m5)/5;
    printf("\nTOTAL RUNS:%d\n" , t);
    printf("\naverage run:%f\n",a);
    if (m1>m2 && m1>m3 && m1>m4 && m1>m5)
       printf("\nhighest score:%f in match 1\n",m1);
    else if ( m2>m3 && m2>m4 && m2>m5 &&m2>m1) 
             printf("\nhighest score:%f in match 2\n",m2);
    else if (m2>m1 && m3>m2 && m3>m4 && m3>m5)
             printf("\nhighest score:%f in match 3\n",m3); 
    else if (m4>m1 && m4>m2 && m4>m3 && m4>m5)
             printf("\nhighest score:%f in match 4\n",m4); 
    else
        printf("highest score:%f in match 5",m5); 
    if (m1<m2 && m1<m3 && m1<m4 && m1<m5)
       printf("\nlowest score:%f in match 1\n",m1);
    else if (m2<m3 && m2<m4 && m2<m5 && m2<m1) 
             printf("\nlowest score:%f in match 2\n",m2);
    else if (m2<m1 && m3<m2 && m3<m4 && m3<m5)
             printf("\nlowest score:%f in match 3\n",m3); 
    else if (m4<m1 && m4<m2 && m4<m3 && m4<m5)
             printf("\nlowest score:%f in match 4\n",m4); 
    else
        printf("\nlowest score:%f in match 5\n",m5);
    if (a>= 150)
        printf("\nexcellent\n");
    else if (a>=100 && a<=149)
             printf("\ngood\n");
    else if ( a>=50 && a<=99)
             printf("\naverage\n");
    else
        printf("\npoor\n");
    return 0;
}
