// to input a number and find it's reverse
#include<stdio.h>
int main(){
 int n,m,sum=0;
 int *p=&n,*q=&sum,*r=&m;
 printf("enter a  number\n");
 scanf("%d",p);
while(*p){
*r=*p%10;
*q=*q*10+m;
*p=*p/10;
}
 printf("reverse %d\n",*q);
return 0;
}
