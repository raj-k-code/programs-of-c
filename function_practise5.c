/*right triangle star using function
	*
	**
	***
	****
	*****    
*/
#include<stdio.h>
void triangle();
void triangle(){
  int i,j;
for(i=1; i<=5; i++){
  for(j=1; j<=i; j++){ 
  printf("*");
   }
  printf("\n");
}

}
int main(){
 triangle();
return 0;
}
