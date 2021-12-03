//print 2,4,6,8,10....
#include<stdio.h>
int main(){
  int i=1,n;
  printf("Enter limit\n");
  scanf("%d",&n);
  while(i<=n){
    printf("%d\n",i*2);
    i++;   
  }
return 0;
}
