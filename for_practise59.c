/*Half diamond
	3
	44
	555
	6666
	555
	44
	3
*/
#include<stdio.h>
int main(){
  int i,j;
for(i=3; i<=6; i++){
 for(j=3; j<=i; j++){ 	 
  printf("%d",i);
   }
     printf("\n");
}

for(i=5; i>=3; i--){
 for(j=3; j<=i; j++){ 	 
  printf("%d",i);
   }
     printf("\n");
}
return 0;
}
