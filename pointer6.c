//to enter a number check whether it is palindorme or not using pointer
#include<stdio.h>
int main(){
 int n,m,sum=0,temp;
 int *p=&n,*q=&sum,*r=&m;
 printf("enter a  number\n");
 scanf("%d",p);
temp=*p;
while(*p){
*r=*p%10;
*q=*q*10+*r;
*p=*p/10;
}
if(temp==*q)
 printf("%d is  palinrome\n",temp);

else
 printf("%d is not palinrome\n",temp);




return 0;
}
