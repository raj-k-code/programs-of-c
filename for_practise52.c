/* cross star patteren
	*   *
	 * * 
	  *  
	 * * 
	*   *

*/
#include<stdio.h>
int main(){
  int i,j,row;
 printf("enter rows number:");
 scanf("%d",&row);
for(i=1; i<=row; i++){
  for(j=1; j<=row; j++){
   if(i==j || j==(row-i+1))
   printf("*");
   else
   printf(" ");
  }
 printf("\n");
}
return 0;
}
