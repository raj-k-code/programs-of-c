//print 1,3,5,7,9....
#include<stdio.h>
int main(){
 int i,n;
 printf("enter number of turms:\n");
 scanf("%d",&n);
 i=1;
while(i<=n){
 printf("%d\n",(2*i-1));
 i++;
}

/*
while(n>=1){
 printf("%d\n",i);
 i=i+2;
 n--;
}
*/


return 0;
}
