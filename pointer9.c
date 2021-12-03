//to calculate the sum of following serise x^1+x^2+x^3+......x^n
#include<stdio.h>
int main(){
 int x,n,sum=0,i=1,p,f=1;
 int *a=&n,*b=&x,*r=&f,*s=&sum;
 printf("enter number(x):\n");
 scanf("%d",b);
 printf("enter power(n):\n");
 scanf("%d",a);
while(i<=*a)
{ 
  p=i;*r=1;
while(p!=0)
 { *r=*r**b;
 p--;
 } 

 *s=*s+*r;
 i++;
}
 printf("x^1+x^2+x^3+......x^n answer of this serise:%d\n",*s);
return 0;
}
