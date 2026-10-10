#include<stdio.h>
int main()
{
    int m;
    m=1;
    int ptr=&m;
    int *pptr=&ptr;
    printf("%p\n",&m);
    printf("%p\n",ptr); 
    printf("%p\n",&ptr);
    printf("%p\n",*pptr); 
    return 0;
}