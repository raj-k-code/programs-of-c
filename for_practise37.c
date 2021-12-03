/* rombus star pattern
        *******
       *******
      *******
     *******
    *******
   *******
  *******
 *******
*******

*/
#include<stdio.h>
int main(){
 int i,j,space;
for(i=9; i>=1; i--){
   for(space=1; space<i; space++)
     printf(" ");
   for(j=1; j<=7; j++){
   printf("*");
    }
   printf("\n");
}

return 0;
}
