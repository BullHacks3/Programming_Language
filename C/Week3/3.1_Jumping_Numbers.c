/* Name :- Bull Hacks */

#include<stdio.h>
int main()
{
	long long int a,b,c=0;
	scanf("%lld",&a); 
    b=a;
    if(b>6)
    	b=b%6;
    if(b==0)
    	c=1;
    else
    {
	while(b>0)
	 {
        b=b-1;
        if(b==0)
        {
         c=1;
         break;
        }
        b=b-2;
        if(b==0)
        {
        	c=1;
        	break;
        }
        b=b-3;
        if(b==0)
        {
        	c=1;
        	break;
        }
      	}
	}
	if(c==0)
	{
		printf("NO");
	}
	else
		printf("YES");
	return 0;
}