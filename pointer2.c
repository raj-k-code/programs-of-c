//to caculate the sum of number from 1 to n using pointer
#include<stdio.h>
int main(){
 int n,i=1,sum=0;
 int *p=&n;
 printf("enter number of turms(n)\n");
 scanf("%d",p);
while(i<=*p){
 sum=sum+i;
 i++;
}
 printf("sum of your serise (1 to n):%d\n",sum);




return 0;
}
