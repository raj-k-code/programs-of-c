//print 2,4,6,8,10.... using do-while loop
#include<stdio.h>
int main(){
 int i,n;
 printf("enter number of turms:\n");
 scanf("%d",&n);
 i=1;
do{ 
   printf("%d\n",i*2);
   i++;

}while(i<=n);
return 0;
}
