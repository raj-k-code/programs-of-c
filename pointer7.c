//to enter a number and check whether it is armstrong or not
#include<stdio.h>
int main(){
 int n,m,sum=0,tem;
 int *p=&n,*q=&sum,*r=&m;
 printf("enter a  number\n");
 scanf("%d",p);
tem=*p;
while(*p!=0){
*r=*p%10;
*q=*q+*r**r**r;
*p=*p/10;
} 
if(tem==*q)
 printf("%d is  Armstrong\n",*q);
else
 printf("%d is not Armstrong\n",tem);
return 0;
}
