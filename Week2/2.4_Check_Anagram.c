/* Name :- B@kul Gupt@ */

#include<stdio.h>
int main()
{
	int i,j,a=0;
	char A[100];
	char B[100];
	scanf("%s%s",A,B);
	int length;
	for(i=0;A[i]!='\0';i++);
    length=i;
     for(i=0;A[i]!='\0';i++)
     {
     	for(j=0;B[j]!='\0';j++)
     	{
     		if(A[i]==B[j])
     		{
     			a++;
     			break;
     		}
     	}
     }
     if(a==length)
     {
     	printf("YES");
     }
     else
     	printf("NO");
	
	return 0;
}