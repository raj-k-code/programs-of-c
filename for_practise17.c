//to calculate the sum of following serise x^1+x^2+x^3+......x^n using for loop
#include<stdio.h>
int main(){
 int x,n,sum=0,i=1,p,f=1;
 printf("enter number(x):\n");
 scanf("%d",&x);
 printf("enter power(n):\n");
 scanf("%d",&n);
for(; i<=n; i++){
   p=i;f=1;
   for(p=i,f=1; p!=0; p--){
        f=f*x;
      }
     sum=sum+f;
}	
 printf("x^1+x^2+x^3+......x^n answer of this serise:%d\n",sum);

return 0;
}
