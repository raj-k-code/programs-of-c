//to calculate the sum of following serise x^1+x^2+x^3+......x^n
#include<stdio.h>
int main(){
 int x,n,sum=0,i=1,p,f=1;
 printf("enter number(x):\n");
 scanf("%d",&x);
 printf("enter power(n):\n");
 scanf("%d",&n);
while(i<=n)
{ 
  p=i;f=1;
while(p!=0)
 { f=f*x;
 p--;
 } 

 sum=sum+f;
 i++;
}
 printf("x^1+x^2+x^3+......x^n answer of this serise:%d\n",sum);





return 0;
}
