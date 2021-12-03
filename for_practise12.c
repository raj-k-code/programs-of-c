//to calculate factorial of any number using for loop
#include<stdio.h>
int main(){
 int n,factorial=1,i=1;
 printf("enter a number to get it's factorial:\n");
 scanf("%d",&n);
for(; i<=n; i++){
  factorial=factorial*i;
}
   printf("%d is factorial of %d \n",factorial,n);

return 0;
}
