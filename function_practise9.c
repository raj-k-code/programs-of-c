/* rombus star pattern using function
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
void rombus();
void rombus(){
  int i,j,space;
for(i=9; i>=1; i--){
   for(space=1; space<i; space++)
     printf(" ");
   for(j=1; j<=7; j++){
   printf("*");
    }
   printf("\n");
}
}
int main(){
 rombus();
return 0;
}
