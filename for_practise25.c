//print 1,3,5,7,9.... using for loop
#include<stdio.h>
int main(){
 int i,n;
 printf("enter number of turms:\n");
 scanf("%d",&n);
 i=1;
for(; i<=n; i++){

   printf("%d\n",2*i-1);
}
return 0;
}
