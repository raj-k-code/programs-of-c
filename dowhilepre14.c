//print all armstrong number from 101 to 999 using do-while
#include<stdio.h>
int main(){
 int n,r,s=0,i=101;
 printf("all armstrong number from 101 to 999\n\n");
do{
  n=i;
  s=0;
	do{
           r=n%10;
           s=s+r*r*r;
           n=n/10;
	  }while(n!=0);
            if(i==s)
              printf("Armstrong number:%d\n",s);

   i++;
}while(i<=999);

return 0;
}
