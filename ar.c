#include<stdio.h>
int main()
{
	int i,j;
    int n = 5;
    
	for(i=0; i<=n; i++){
        int k=0;
	    for(j=1;j<=i;j++){
	        printf("%d",j);
	    }
        for(k=0; k<2*(n-i)-1; k++){
            printf(" ");
        }
        if(i==n){
            for(j=i-1;j>=1;j--){
                printf("%d",j);
            }
            printf("\n");
        }
        else{
            for(j=i;j>=1;j--){
                printf("%d",j);
            }
            printf("\n");
        }
	}
	return 0 ;
	
}