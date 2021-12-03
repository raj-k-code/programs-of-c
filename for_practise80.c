/* binary pattern
	0
	11
	000
	1111
	00000
*/
#include<stdio.h>
int main(){
 int i,j;
  for(i=1; i<=5; i++){
     for(j=1; j<=i; j++){
      if(i%2==0)
      printf("1");
      else
      printf("0");
     }
   printf("\n");
}
return 0;
}
