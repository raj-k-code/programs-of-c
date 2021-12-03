// wap to print the revers of number from 101 to 199 using do-while
#include<stdio.h>
int main(){
 int n,r,s=0,i=101;
 printf("all reverse number from 101 to 199\n\n");
 do{
    n=i;
    s=0;
	do{
           r=n%10;
           s=s*10+r;
           n=n/10;
	  }while(n!=0);
  
    printf("revers number:%d\n",s);
    i++;

   }while(i<=199);

return 0;
}
