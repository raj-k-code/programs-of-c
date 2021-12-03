/* Diamond star pattern
    *
   ***
  *****
 *******
*********
 *******
  *****
   ***
    *

*/
#include<stdio.h>
int main(){
  int i,j,space;
for(i=1; i<=5; i++){
  for(space=5; space>i; space--)
   printf(" ");
   for(j=1; j<=2*i-1; j++){
   
   printf("*");
    
 }
  printf("\n");
}
 for(i=4; i>0; i--){
     for(space=4; space>=i; space--)
       printf(" ");
	for(j=1; j<=2*i-1; j++){
	printf("*");
        }
  
    printf("\n");
}
return 0;
}
/*
for(i=1; i<=4; i++){
  for(space=5; space>i; space--)
   printf(" ");
   for(j=1; j<=i; j++){
   
   printf("*");
    
 }
  printf("\n");
}

 for(i=1; i<=5; i++){
     for(space=1; space<i; space++)
       printf(" ");
	for(j=5; j>=2*i-1; j--){
	printf("*");
        }
  
    printf("\n");
}

/*for(i=1; i<=5; i++){
  for(j=1; j<=i; j++){
   printf("*");
  }
 printf("\n");
}
for(i=4; i>=1; i--){
  for(j=1; j<=2*i-1; j++){
   printf("*");
  }
 printf("\n");
}
*/

