// to input a number and find it's reverse
#include<stdio.h>
int main(){
 int n,m,sum=0;
 printf("enter a  number\n");
 scanf("%d",&n);
while(n){
m=n%10;
sum=sum*10+m;
n=n/10;
}
 printf("reverse %d",sum);
return 0;
}
