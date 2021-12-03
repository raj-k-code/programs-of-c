//to enter a number and check whether it is armstrong or not using for loop
#include<stdio.h>
int main(){
 int n,m,sum=0,tem;
 printf("enter a  number\n");
 scanf("%d",&n);
tem=n;
for(; n!=0; n=n/10){
  m=n%10;
  sum=sum+m*m*m;
}
   if(tem==sum)
    printf("%d is  armstrong\n",tem);

   else
    printf("%d is not armstrong\n",tem);
return 0;
}

