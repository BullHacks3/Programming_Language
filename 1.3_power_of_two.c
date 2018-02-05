//Program to Check Whether A number N is power of 2 or not
//Name :- Bull Hacks

#include<stdio.h>
int main()
{
	long  double a;
	scanf("%Lf",&a);
    int k=1;
  while(a>0)
  {
    a=a/2;
    if(a==1.0)
    {
    	k=0;
    	printf("YES");
    	break;
    }
  }
if(k==1)
	printf("NO");
return 0;

}