/*mirrored right triangle
	    *
	   **
	  ***
	 ****
	*****
*/
#include<stdio.h>
int main(){
 int i,j,space;
/*for(i=1; i<=5; i++){
  for(j=1; j<=5; j++){ 
	if((j==1 && i<5)||(j==2 && i<4)||(j==3 && i<3)||(j==4 && i<2))     
	printf(" ");
	else
	printf("*"); 
*/
 for(i=5; i>=1; i--){
    for(space=1; space<i; space++)
	printf(" ");
       for(j=5; j>=i; j--){
        printf("*"); 
    
     }
 printf("\n");

}
return 0;
}


