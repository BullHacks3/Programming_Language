/* Name :- Bull Hack */

#include<stdio.h>
#include<math.h>
int main()
{
	int n,v1,v2;
	scanf("%d%d%d",&n,&v1,&v2);
     float tw=0.0,tt=0.0;
     tw=(sqrt(2)*n)/v1;
     tt=(2.0*n)/v2;
     if(tw<tt)
     	printf("Walk");
     else
     	printf("Taxi");
	return 0;
}