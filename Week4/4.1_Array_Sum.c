/*Name :- Bull H@cks */

#include<stdio.h>
#define rep(i,a,b,c) for(i=a;i<b;i+=c)
int sumprefix(int I,int N,int A[])
  {
  int i,ki=0;
  for(i=0;i<=I;i++)
   ki+=A[i];
   return ki;
}

int sumsuffix(int I,int N,int A[])
  {
    int m=N-I;
    int n=N-1;
    int ki=0;
    while(m--)
     {
       ki+=A[n];
       n--;
     }
     return ki;

  }



int main()
{
int N;
scanf("%d",&N);
int A[N],i;
rep(i,0,N,1)
  scanf("%d",&A[i]);
int k=0,m=0,B[N];
rep(i,0,N,1)
  {
     B[i]=sumprefix(i,N,A)+sumsuffix(i,N,A);
      if(i==0)
        m=B[i];
      else if(m>B[i])
         {
            m=B[i];
            k=i;
         }
  }
printf("%d",k+1);

return 0;
}
