/*
 Mirrored rombus star pattern using function
*******
 *     *
  *     *
   *     *
    *     *
     *     *
      *     *
       *     *
        *******

*/

#include<stdio.h>
void mirror_hollowrombus();
void mirror_hollowrombus(){
  int i,j,space;
for(i=1; i<=9; i++){
   for(space=1; space<i; space++)
     printf(" ");
   for(j=1; j<=7; j++){
    if(i==9|| i==1|| j==1|| j==7)
     printf("*");
    else
     printf(" ");
      	
    }
   printf("\n");
}

}
int main(){
 mirror_hollowrombus();
return 0;
}
