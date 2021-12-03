//print 2,4,6,8,10....
#include<stdio.h>
int main(){
  int i=1,n;
  int *p=&i,*q=&n;
  printf("Enter limit\n");
  scanf("%d",q);
  while(i<=*q){
    printf("%d\n",*p*2);
    i++;   
  }
return 0;
}
