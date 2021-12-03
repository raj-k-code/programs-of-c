//print 1,3,5,7,9.... using do-while loop
#include<stdio.h>
int main(){
 int i,n;
 printf("enter number of turms:\n");
 scanf("%d",&n);
 i=1;
do{ 
   printf("%d\n",(2*i-1));
   i++;

}while(i<=n);
return 0;
}
