/*Half diamond
	3
	45
	678
	9101112
	678
	45
	3
	
*/
#include<stdio.h>
int main(){
  int i,j,k=3;
for(i=3; i<=6; i++){
 for(j=3; j<=i; j++){ 	 
  printf("%d",k++);
   }
     printf("\n");
}
 
k=6;
for(i=3; i>=1; i--){
 for(j=1; j<=i; j++){ 	 
  printf("%d",k++);
   }
     k=(k+1)-2*i;	
     printf("\n");
}
return 0;
}
