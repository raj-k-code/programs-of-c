//wap to enter a number and check it prime or not using for loop
#include<stdio.h>
int main(){
 int n,i;
 printf("enter a number to check it's prime or not:\n");
 scanf("%d",&n);
 
for(i=2; i<=n/2; i++){
   if(n%i==0)
     break;
}
  if(i>n/2 && n>1)
   printf("%d is prime\n",n);
  else
   printf("%d is not prime\n",n);

return 0;
}
