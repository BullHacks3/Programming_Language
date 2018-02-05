//Program to Count Digit
//Name:- BullHacks
#include<stdio.h>
int main()
{
	unsigned long a;
	unsigned int b,d=0,temp;
	scanf("%ld",&a);
	scanf("%d",&b);
	while(a>0)
	{
		temp=a%10;
		if(temp==b)
			d++;
		a=a/10;
	}
	printf("%d",d);
	return 0;
}