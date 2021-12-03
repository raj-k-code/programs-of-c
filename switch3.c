//WAP to enter a number and check whether its even or odd using switch statement
#include<stdio.h>
int main(){
 int n;
 printf("enter a number:\n");
 scanf("%d",&n);
 switch(n&1)
{
 case 0: printf("Number is even..\n");
 break;
 case 1: printf("Number is odd..\n");
 break;
}

return 0;
}
