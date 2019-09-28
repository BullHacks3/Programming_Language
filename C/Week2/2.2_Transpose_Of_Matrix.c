/* Name :- Bull Hacks */

#include<stdio.h>
#define rep(i,a,b,c) for(i=a;i<b;i+=c)
int main()
{
	int m,n;
	//Here m denotes the number of rows
	//Here n denotes the number of columns
	scanf("%d%d",&m,&n);
    int i,j;
    int A[m][n];
    rep(i,0,m,1)
    	rep(j,0,n,1)
    		scanf("%d",&A[i][j]);

    rep(i,0,n,1)
    {
    	rep(j,0,m,1)
    		{
    			printf("%d",A[j][i]);
    			printf(" ");
    		}
    	printf("\n");
    }
	return 0;
}