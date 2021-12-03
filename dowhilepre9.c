//to enter a number check whether it is palindorme or not
#include<stdio.h>
int main(){
 int n,m,sum=0,tem;
 printf("enter a  number\n");
 scanf("%d",&n);
  tem=n;
   do{ 
	m=n%10;
	sum=sum*10+m;
	n=n/10;
}while(n>0);
	if(tem==sum)
	 printf("%d is  palinrome\n",sum);

	else
	 printf("%d is not palinrome\n",tem);
	

return 0;
}

	
