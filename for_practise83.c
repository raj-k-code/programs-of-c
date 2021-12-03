/*Hollow binary pattern
	1
	10
	1 1
	1  0
	10101
*/
#include<stdio.h>
int main(){
int m,n;
 
  for(m=1; m<=5; m++){
     for(n=1; n<=m; n++){
    if(n==1|| m==5|| m==n){
      if(n%2==1)
      printf("1");
      else
      printf("0");
      }
      else
      printf(" "); 
   }
   printf("\n");
}
return 0;
}
