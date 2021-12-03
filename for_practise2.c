/*to print using for loop
      * 
      * * 
      * * * 
      * * * * 
      * * * * *
*/
#include<stdio.h>
 int main(){
  int i,j,n,m;
   printf("enter rows number:\n");
   scanf("%d",&n);
   printf("enter coloumn number:\n");
   scanf("%d",&m);
for(i=1; i<=n; i++){
   for(j=1; j<=i; j++){
      printf("*");
     }
     printf("\n");
}

return 0;
}
