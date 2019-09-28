//Program to find out whether a year is leap or not
//Name :- Bull Hacks

#include<stdio.h>
int main()
{
	unsigned long leap;
	scanf("%ld",&leap);
	if(leap%400==0)
		 {
		 	printf("YES");
		 }
	else 
	{
		if(leap%4==0 && leap%100!=0)
		{
			printf("YES");		
		}
		else
			printf("NO");

	}
	return 0;
}