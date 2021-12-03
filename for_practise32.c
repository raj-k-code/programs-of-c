/*hollow mirrored right triangle star pattern 
    * 
   ** 
  * *
 *  *
*****
*/
#include<stdio.h>
int main(){
 int i,j,space;
/*for(i=1; i<=5; i++){
  for(j=1; j<=5; j++){ 
	if((j==1 && i<5)||(j==2 && i<4)||(j==3 && i<3)||(j==4 && i<2)||(j==3 && i==4)||(j==4 && i==4)||(j==4 && i==3))     
	printf(" ");
	else
	printf("*");
*/
for(i=5; i>=1; i--){
    for(space=1; space<i; space++)
	printf(" ");
       for(j=5; j>=i; j--){
	if(i==1|| j==5|| i==j)
        printf("*"); 
        else
        printf(" ");
    
           
     }
 printf("\n");

}
return 0;
}
