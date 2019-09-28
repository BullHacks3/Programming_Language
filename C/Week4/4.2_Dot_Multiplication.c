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
int N;
scanf("%d",&N);
int A[N],B[N];
int i;
rep(i,0,N,1)
   scanf("%d",&A[i]);
   insertion_sort(A,N);
rep(i,0,N,1)
    scanf("%d",&B[i]);
    insertion_sort(B,N);
int j,k=0,l=N-1;
rep(i,0,N,1)
      {

         k+=A[i]*B[l];
         l--;
         }


printf("%d",k);
return 0;
}
