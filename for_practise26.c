//print 2,4,6,8,10.... using for loop
#include<stdio.h>
int main(){
  int i=1,n;
  printf("Enter limit\n");
  scanf("%d",&n);
for(; i<=n; i++){
  printf("%d\n",i*2);

}
return 0;
}
