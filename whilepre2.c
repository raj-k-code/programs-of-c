//to caculate the sum of number from 1 to n
#include<stdio.h>
int main(){
 int n,i=1,sum=0;
 printf("enter number of turms(n)\n");
 scanf("%d",&n);
while(i<=n){
 sum=sum+i;
 i++;
}
 printf("sum of your serise (1 to n):%d\n",sum);




return 0;
}
