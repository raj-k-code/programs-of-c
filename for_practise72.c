/*Half diamond
	3
	54
	876
	1211109
	876
	54
	3
*/
#include<stdio.h>
int main(){
  int i,j,k=3;
for(i=1; i<=4; i++){
 for(j=1; j<=i; j++){ 	 
  printf("%d",k--);
   }
    k=(k+1)+2*i;
     printf("\n");
}

k=8;
for(i=3; i>=1; i--){
 for(j=1; j<=i; j++){ 	 
  printf("%d",k--);
   }
     printf("\n");
}
return 0;
}
