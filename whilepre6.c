//to enter a number check whether it is palindorme or not
#include<stdio.h>
int main(){
 int n,m,sum=0,p;
 printf("enter a  number\n");
 scanf("%d",&n);
p=n;
while(n){
m=n%10;
sum=sum*10+m;
n=n/10;
}
if(p==sum)
 printf("%d is  palinrome\n",p);

else
 printf("%d is not palinrome\n",p);




return 0;
}
