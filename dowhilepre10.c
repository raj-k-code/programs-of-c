//to enter a number and check whether it is armstrong or not using do-while
#include<stdio.h>
int main(){
 int n,m,sum=0,tem;
 printf("enter a  number\n");
 scanf("%d",&n);
tem=n;
  do{
	m=n%10;
	sum=sum+m*m*m;
	n=n/10;
    }while(n!=0);
	if(tem==sum)
	 printf("%d is  Armstrong\n",sum);
	else
	 printf("%d is not Armstrong\n",tem);
return 0;
}
