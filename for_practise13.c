// to input a number and find it's reverse using for loop
#include<stdio.h>
int main(){
 int n,m,sum=0;
 printf("enter a  number\n");
 scanf("%d",&n);
for(; n!=0; n=n/10){
  m=n%10;
  sum=sum*10+m;
}
  printf("reverse: %d\n",sum);

return 0;
}
