/* binary pattern
	1
	00
	111
	0000
	11111
*/
#include<stdio.h>
int main(){
 int i,j;
  for(i=1; i<=5; i++){
     for(j=1; j<=i; j++){
      if(i%2==1)
      printf("1");
      else
      printf("0");
     }
   printf("\n");
}
return 0;
}
