/* Name :- Bull H@cks */

#include<stdio.h>
#define rep(i,a,b,c) for(i=a;i<b;i+=c)
void insertion_sort(int A[],int N)
{
  int i,j,temp;
  rep(i,0,N-1,1)
       {
         j=i+1;
         temp=A[j];
         while(temp<A[i] && i>=0)
          {
          A[i+1]=A[i];
          i--;
          }
         A[i+1]=temp;

       }

}


int main()
{
int N,i;
scanf("%d",&N);
int A[N];
rep(i,0,N,1)
  scanf("%d",&A[i]);

insertion_sort(A,N);
int k=0;
rep(i,0,N-1,1)
  {
     if(A[i]==A[i+1])
     {
     k=1;
     break;
     }
   }
if(k==0)
printf("YES");
else
printf("NO");




return 0;
}
