/* Name :- Bull Hacks */

#include<stdio.h>
#define rep(i,a,b,c) for(i=a;i<b;i+=c)
int main()
{
	long int N,K;
	scanf("%ld%ld",&N,&K);
	long int A[N],i;
	long int max=-999999999;
	rep(i,0,N,1)
	     {
		scanf("%ld",&A[i]);
	       if(max<A[i])
	       	 max=A[i];
	      }
	int j;
	rep(j,0,K,1)
	{
		//printf("Value of K is %ld",K);
		long int max1=-999999999;
		rep(i,0,N,1)
	   {
	     A[i]=max-A[i];
	      if(max1<A[i])
	      	max1=A[i];
       }
       max=max1;
	} 
	rep(i,0,N,1)
	{
		printf("%ld ",A[i]);
		//printf(" ");
	}    
	return 0;
}