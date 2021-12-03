/*
	*
	*1*
	*121*
	*12321*
	*121*
	*1*
	*
*/
#include<stdio.h>
int main(){
  int i,j,k;
 printf("*\n");
for(i=1; i<=3; i++){

   for(j=1; j<=i; j++){
   if(j==1)
   printf("*");
   printf("%d",j); 
   } 
 
  for(k=i-1; k>=1; k--){
   if(j==1)
   printf("*");
   printf("%d",k);
   }

  printf("*");
  printf("\n"); 				
}
	
  for(i=2; i>=1; i--){
    for(j=1; j<=i; j++){
      if(j==1)
      printf("*");	
      printf("%d",j);
      }
   for(k=i-1; k>=1; k--){
   if(j==1)
   printf("*");
   printf("%d",k);
   }

  printf("*");
  printf("\n");  
} 
  printf("*\n");
return 0;
}
