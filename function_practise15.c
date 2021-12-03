/*pyramid star pattern using function
    *  
   * * 
  * * * 
 * * * * 
* * * * * 

*/
#include<stdio.h>
void pyramid();
void pyramid(){
  int i,j,space;

for(i=1; i<=5; i++){
  for(space=5; space>i; space--)
   printf(" ");
   for(j=1; j<=i; j++){
   
   printf("* ");
    
 }
 
 printf("\n");
}

}

int main(){
 
 pyramid();
return 0;
}
