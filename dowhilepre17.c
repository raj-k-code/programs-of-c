//wap to calculate the sum of following serise 1/1!+2/2!+3/3!.....n/n! using do-while
#include<stdio.h>
int main(){
 float sum=0;
 int n,num,f=1,i=1;
 printf("enter number of turms\n");
 scanf("%d",&n);
 i=1;
 do{ 
      num=i;
      f=1;
     do{
        f=f*num;
        num--;

       }while(num!=0);
  sum=sum+(float)i/f;
  i++;

   }while(i<=n);
  printf("%f",sum);
return 0;
}
