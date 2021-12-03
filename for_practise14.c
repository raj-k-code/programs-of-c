//to enter a number check whether it is palindorme or not using for loop#include<stdio.h>
#include<stdio.h>
int main(){
 int n,m,sum=0,tem;
 printf("enter a  number\n");
 scanf("%d",&n);
 tem=n;
for(; n!=0; n=n/10){
  m=n%10;
  sum=sum*10+m;
}
   if(tem==sum)
    printf("%d is  palinrome\n",tem);

   else
    printf("%d is not palinrome\n",tem);

return 0;
}

