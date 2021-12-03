/* hollow full pyramid
	    1 
	   1 2 
	  1   3 
	 1     4 
	1 2 3 4 5	  
*/
#include<stdio.h>
int main(){
  int i,j,space;
for(i=1; i<=5; i++){
 for(space=5; space>i; space--)
  printf(" ");
   for(j=1; j<=i; j++){
   if(i==3 && j==2 || i==4 && j>1 && j<4)
   printf("  ");
   else
   printf("%d ",j); 
 }  
  printf("\n");
}

return 0;
}
