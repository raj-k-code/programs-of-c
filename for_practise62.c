/*
    1
   121
  12321
 1234321
123454321

*/
#include<stdio.h>
int main(){
  int i,j,space;
for(i=1; i<=5; i++){
 for(space=5; space>i; space--)
  printf(" ");
   for(j=1; j<=i; j++){
   printf("%d",j); 
   }  
 int k;
     for(k=i-1; k>=1; k--){
      printf("%d",k);
  
      }
     printf("\n");
}

return 0;
}
