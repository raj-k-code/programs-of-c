/*inverted mirrored right triangle star pattern
 ******
  *   *
   *  *
    * *
     **
      *

*/
#include<stdio.h>
int main(){
  int i,j;

for(i=1; i<=5; i++){
  for(j=1; j<=5; j++){
   if(i==1|| j==5|| i==j)
   printf("*");
   else
   printf(" ");  
 }
  printf("\n");
}
return 0;
}
