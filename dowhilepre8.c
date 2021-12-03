// to input a number and find it's reverse
#include<stdio.h>
int main(){
 int n,m,sum=0;
 printf("enter a  number\n");
 scanf("%d",&n);

   do{ 
	m=n%10;
	sum=sum*10+m;
	n=n/10;
}while(n>0);
	printf("Revers of your number: %d\n",sum);

return 0;
}
