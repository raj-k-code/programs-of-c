//print 1 to 10
#include<stdio.h>
int main(){
 int i;
 i=1;
 int *p=&i;
while(*p<=10){
 printf("%d\n",*p);
 i++;
}
return 0;
}
