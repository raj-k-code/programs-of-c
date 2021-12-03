// wap to print the revers of number from 101 to 199
#include<stdio.h>
int main(){
 int n,r,s=0,i=101;
 printf("all reverse number from 101 to 199\n\n");
while(i<=199)
{ n=i;
  s=0;
  
    while(n!=0)
      { r=n%10;
        s=s*10+r;
        n=n/10;
      }
        printf("revers number:%d\n",s);
 i++;
}
return 0;
}
