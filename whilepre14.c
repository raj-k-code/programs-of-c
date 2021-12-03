//wap to calculate the sum of following serise 1/1!+2/2!+3/3!.....n/n!
#include<stdio.h>
int main(){
 float sum=0;
 int n,num,f=1,i=1;
 printf("enter number of turms\n");
 scanf("%d",&n);
i=1;
while(i<=n){
 num=i;
 f=1;
 while(num!=1){
 f=f*num;
 num--;
} 
sum=sum+(float)i/f;
i++;
}
printf("%f",sum);
return 0;
}

