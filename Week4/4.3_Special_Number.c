/* Name :- Bull H@cks */

#include<stdio.h>
#define rep(i,a,b,c) for(i=a;i<=b;i+=c)
int check(int N)
{
int k,three=0,five=0,six=0,rem,total=0;
k=N;
  while(k>0)
    {
    rem=k%10;
     if(rem==3)
       three++;
      else if(rem==5)
       five++;
       else if(rem==6)
        six++;
    k=k/10;
    }
    total=three+five+six;
return total;
}

int main()
{
int N,i;
scanf("%d",&N);
int total,final1;
int w=0;
rep(i,2,N,1)
  {
  final1=0;
    if(N%i==0)
       {

          total=check(i);
           if(total!=0)
              w+=1;
       }

  }
printf("%d",w);

return 0;
}

