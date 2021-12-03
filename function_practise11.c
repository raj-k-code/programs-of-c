/*
 Mirrored rombus star pattern using function
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
void mirror_rombus();
void mirror_rombus(){
  int i,j,space;
for(i=1; i<=9; i++){
   for(space=1; space<i; space++)
     printf(" ");
   for(j=1; j<=7; j++){
      printf("*");	
    }
   printf("\n");
}

}

int main(){
 mirror_rombus();
return 0;
}
