/* binary pattern
	1
	00
	1 1
	0  0
	11111
*/
#include<stdio.h>
int main(){
 int i,j;
  for(i=1; i<=5; i++){
     for(j=1; j<=i; j++){
     if(j==1|| i==5|| i==j){
      if(i%2==1)
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
