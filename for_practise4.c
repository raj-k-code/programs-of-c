/*to print using for loop
	5	
	54
	543
	5432
	54321
*/
#include<stdio.h>
 int main(){
  int i,j,n,m;
   printf("enter rows number:\n");
   scanf("%d",&n);
   printf("enter coloumn number:\n");
   scanf("%d",&m);
for(i=1; i<=n; i++){
   for(j=n; j>=6-i; j--){
      printf("%d",j);
     }
     printf("\n");
}
/*for(i=n; i>=1; i--){
   for(j=n; j>=i; j--){
      printf("%d",j);
     }
     printf("\n");
}*/
return 0;
}
