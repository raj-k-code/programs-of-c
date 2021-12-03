//to calculate factorial of any number using pointer
#include<stdio.h>
int main(){
 int n,factorial=1,i=1;
 int *p=&n,*f=&factorial;
 printf("enter a number to get it's factorial:\n");
 scanf("%d",p);
while(i<=*p){
 *f=*f*i;
 i++;
}
 printf("%d is factorial of %d\n",*f,*p);





return 0;
}
