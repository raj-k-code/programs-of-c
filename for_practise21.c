// wap to print the revers of number from 101 to 199 using for
#include<stdio.h>
int main(){
 int n,r,s=0,i=101;
 printf("all reverse number from 101 to 199\n\n");
for(; i<=199; i++){
  for(n=i,s=0; n!=0;n/=10){
         r=n%10;
         s=s*10+r;
       }

   printf("revers number:%d\n",s);

}
return 0;
}
