// calculate sum of following serise 1-2+3-4+5-6....+-n usimg for loop
#include<stdio.h>
int main(){
 int n,i=1,sum=0;
 printf("Enter number of turms:\n");
 scanf("%d",&n);
for(; i<=n; i++){
   if(i%2==0)
   sum=sum-i;
   else
   sum=sum+i;
}
   printf("sum of your serise: %d\n",sum);

return 0;
}
