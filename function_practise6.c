/*inverted right triangle star pattern using function
******
*****
****
***
**
*

*/
#include<stdio.h>
void inverted_triangle();
void inverted_triangle(){
   int i,j;
for(i=5; i>=1; i--){
  for(j=1; j<=i; j++){ 
  printf("*");
   }
  printf("\n");
}

}
int main(){
  inverted_triangle(); 
 return 0;
}
