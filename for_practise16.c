//12th assignment to calculate the power of any given number using for loop
#include<stdio.h>
int main(){
 int n,p,result=1;
 printf("enter number:\n");
 scanf("%d",&n);
 printf("enter power:\n");
 scanf("%d",&p);
for(; p!=0; p--){
   result=result*n;
}
 printf("Result:%d\n",result);

return 0;
}
