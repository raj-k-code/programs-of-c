//wap to enter a number and check it prime or not
#include<stdio.h>
int main(){
 int n,i;
 int *p=&n;
 printf("enter a number to check it's prime or not:\n");
 scanf("%d",p);
 i=2;
while(i<=*p/2){
  if(*p%i==0)
  break;
 i++;
}
 if(i>*p/2 && *p>1)
 printf("%d is prime\n",*p);
 else
 printf("%d is not prime\n",*p);




return 0;
}

