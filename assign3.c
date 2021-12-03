//WAP to check the sign of given number
#include<stdio.h>
int main(){
 int n;
 printf("enter a number:\n");
 scanf("%d",&n);
 if(n>0)
 printf("entered number sign is positive(+):%d\n",n);
 else
 if(n<0)
 printf("entered number sign is negative(-):%d\n",n);
 else
 printf("number is neither positive nor negative\n");






return 0;
}
