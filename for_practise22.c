//wap to calculate the sum of following serise 1/1!+2/2!+3/3!.....n/n! using for loop
#include<stdio.h>
int main(){
 float sum=0;
 int n,num,f=1,i=1;
 printf("enter number of turms\n");
 scanf("%d",&n);
i=1;
for(; i<=n; i++){
  for(n=i,s=0; n!=0;n/=10){
         r=n%10;
         s=s*10+r;
       }

