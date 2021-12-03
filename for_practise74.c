/*Half diamond
	2
	34
	567
	891011
	891011
	567
	34
	2	
*/
#include<stdio.h>
int main(){
  int i,j,k=2;
for(i=2; i<=5; i++){
 for(j=2; j<=i; j++){ 	 
  printf("%d",k++);
   }
     printf("\n");
}
 
k=8;
for(i=4; i>=1; i--){
 for(j=1; j<=i; j++){ 	 
  printf("%d",k++);
   }
     k=(k+1)-2*i;	
     printf("\n");
}
return 0;
}
