/*
    1
   232
  34543
 4567654
567898765


  */
#include<stdio.h>
int main(){
  int i,j,space,c,k;
for(i=1; i<=5; i++){
 for(space=5; space>i; space--)
  printf(" ");

c=i;
   for(j=1; j<=i; j++){
   printf("%d",c++); 
   }  
     for(k=(i-1)*2; k>=i; k--)
      printf("%d",k);
  

     printf("\n");
}
return 0;
}
