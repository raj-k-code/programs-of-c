/*  haif diamond
	1
	2*3
	4*5*6
	7*8*9*10
	7*8*9*10
	4*5*6
	2*3
	1
*/
#include<stdio.h>
int main(){
  int i,j,k=1;
for(i=1; i<=4; i++){
 for(j=1; j<=i; j++){
 	 if(j<i)
 	 printf("%d*",k);
            
 	 else if(i==j)    
 	 printf("%d",k);
    k++; 
   }
      printf("\n");
}`
 k=7;
for(i=4; i>=1; i--){
 for(j=1; j<=i; j++){
 	 
if(j<i)
 	 printf("%d*",k++);
  
 	 else if(i==j)    
 	 printf("%d",k++);  
   }
  k=(k+1)-2*i;
  printf("\n");
}

return 0;
}
