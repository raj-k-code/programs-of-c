//print 10 to 1
#include<stdio.h>
int main(){
 int i;
 i=10;
 int *p=&i;
while(*p>=1){
 printf("%d\n",*p);
 i--;
}

return 0;
}
