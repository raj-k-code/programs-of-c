//print 1,3,5,7,9....
#include<stdio.h>
int main(){
 int i,n;
 int *p=&i,*q=&n;
 printf("enter number of turms:\n");
 scanf("%d",q);
 *p=1;
while(i<=*q){
 printf("%d\n",(2**p-1));
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
