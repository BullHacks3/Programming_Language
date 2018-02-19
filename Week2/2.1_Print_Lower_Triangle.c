/*Name :- Bull Hacks */

#include<stdio.h>
#define rep(i,a,b,c) for(i=a;i<b;i+=c)
int main()
{
	int m,n,i,j;
	scanf("%d%d",&m,&n);
	int A[m][n];
    rep(i,0,m,1)
        rep(j,0,n,1)
             scanf("%d",&A[i][j]);

     rep(i,0,m,1)
        {
        	rep(j,0,n,1)
        	   {
        	   	if(i>=j)
        	   		printf("%d",A[i][j]);
        	    else
        	    	printf("0");
        	    printf(" ");
        	   }
        	 printf("\n");


        }
}