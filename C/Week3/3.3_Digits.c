/* Name :- Bull Hacks */

#include<stdio.h>
int main()
{
	long int a,zero=0,one=0,c=0;
        char n[105];
	scanf("%s",n);
      int i;
for(i=0;n[i]!='\0';i++);
        int length=i;

         for(i=0;i<length;i++)
{
          if(n[i]=='0')
               zero++;
          else
               one++;
}
     if((zero==1 && one!=0) ||(one==1 && zero!=0))
       {
       	printf("YES");
       }
     else
     	printf("NO");
	return 0;
}
