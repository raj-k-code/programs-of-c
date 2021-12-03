/*inverted mirrored right triangle star pattern using function
 ******
  *****
   ****
    ***
     **
      *

*/
#include<stdio.h>
void invertedmirror_triangle();
void invertedmirror_triangle(){
   int i,j;

for(i=1; i<=5; i++){
  for(j=1; j<=5; j++){
   if(j>=i)
   printf("*");
   else
   printf(" ");  
 }
  printf("\n");
}

}

int main(){
 invertedmirror_triangle();
return 0;
}
