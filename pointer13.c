// wap to print the revers of number from 101 to 199
#include<stdio.h>
int main(){
 int n,m,s=0,i=101;
 int *p=&n,*q=&s,*r=&m;
 printf("all reverse number from 101 to 199\n\n");
while(i<=199)
{ *p=i;
  *q=0;
  
    while(*p!=0)
      { *r=*p%10;
        *q=*q*10+*r;
        *p=*p/10;
      }
        printf("revers number:%d\n",*q);
 i++;
}
return 0;
}
