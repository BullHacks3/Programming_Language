/* Name :- Bull Hacks */

#include<stdio.h>
#define rep(i,a,b,c) for(i=a;i<b;i+=c)
int main()
{
	char str[100];
	int i,a=1,j;
	scanf("%s",str);
    for(i=0;str[i]!='\0';i++);
    int length=i-1;
     for(j=length,i=0;j>=0,i<=length;j--,i++)
     {
     	if(str[i]==str[j] || str[i]=='.' || str[j]=='.')
     	{
         a=2;
     	}
     	else
     	{
     		a=1;
     		break;
     	}
     }
     if(a==2)
     {
     	for(i=0;i<=length;i++)
     	{
     		if(str[i]=='.' && str[length]!='.')
     		{
     			str[i]=str[length];
     		
     	    }
     	    else if(str[i]!='.' && str[length]=='.')
     	    {
     	    	str[length]=str[i];
     		
     	    }
     	    else if(str[i]=='.' && str[length]=='.')
     	    {
     	    	str[i]='a';
     	    	str[length]='a';
     	    }
          length--;
     	}
     	printf("%s",str);
     }
     else
     	printf("-1");
     
 return 0;
}