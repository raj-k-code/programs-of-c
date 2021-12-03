/*mirrored right triangle using function
	    *
	   **
	  ***
	 ****
	*****
*/
#include<stdio.h>
void right_triangle();
void right_triangle(){
  int i,j,space;

 for(i=5; i>=1; i--){
    for(space=1; space<i; space++)
	printf(" ");
       for(j=5; j>=i; j--){
        printf("*"); 
    
       }
    printf("\n");
 }

}
int main(){
 right_triangle();
return 0;
}


