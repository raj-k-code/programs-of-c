/*hollow right using function
*
**
* *
*  *
*****    

*/
#include<stdio.h>
void hollow_triangle();
void hollow_triangle(){
  int i,j;
  for(i=1; i<=5; i++){
     for(j=1; j<=i; j++){ 
       if((j==1)||(i==5)||(i==j))
        printf("*");
       else
        printf(" ");
     }
	printf("\n");
  }
}
int main(){
  hollow_triangle();
  
return 0;
}
