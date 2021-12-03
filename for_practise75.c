/*Half diamond
	2
	43
	765
	111098
	111098
	765
	43
	2		
*/
#include<stdio.h>
int main(){
  int i,j,k=2;
for(i=1; i<=4; i++){
 for(j=1; j<=i; j++){ 	 
  printf("%d",k--);
   }
     k=(k+1)+2*i;
     printf("\n");
}
 
k=11;
for(i=4; i>=1; i--){
 for(j=1; j<=i; j++){ 	 
  printf("%d",k--);
   }
     printf("\n");
}
return 0;
}
