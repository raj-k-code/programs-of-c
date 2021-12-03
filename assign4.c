//WAP to check whether given number is even or odd
#include<stdio.h>
int main(){
 int n;
 printf("enter a number:\n\n");
 scanf("%d",&n);
if((n&1)==0)
printf("entered number is even:%d\n",n);
else
printf("entered number is odd:%d\n",n);




return 0;
}
