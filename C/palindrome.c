//Program to find out whether a number is Palindrome or not
//NAme :- Bull Hacks

#include<stdio.h>

int main()
{
	unsigned long ab,z,temp=0;
	int k;
    scanf("%ld",&ab);
    z=ab;
    while(z>0)
    {
    	k=z%10;
        temp=temp*10 + k;
        z=z/10;
    }

    if(temp==ab)
    	printf("YES");
    else
    	printf("NO");
  
	return 0;
}