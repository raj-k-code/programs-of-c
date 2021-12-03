//to enter a number and check whether it is armstrong or not
#include<stdio.h>
int main(){
 int n,m,sum=0,tem;
 printf("enter a  number\n");
 scanf("%d",&n);
tem=n;
while(n!=0){
m=n%10;
sum=sum+m*m*m;
n=n/10;
} 
if(tem==sum)
 printf("%d is  Armstrong\n",sum);
else
 printf("%d is not Armstrong\n",tem);
return 0;
}
