/* hollow inverted right triangle star pattern using function
        ******
	*   *
	*  *
	* *
	**
	*

*/
#include<stdio.h>
void hollowinverted_triangle();
void hollowinverted_triangle(){
   int i,j;
for(i=5; i>=1; i--){
  for(j=1; j<=i; j++){ 
    if((j==1)||(i==5)||(i==j))
     printf("*");
    else
    printf(" ");
   }
  printf("\n");
}

}
int main(){
  hollowinverted_triangle();
return 0;
}
