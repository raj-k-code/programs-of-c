/*hollow mirrored right triangle star pattern using function
    * 
   ** 
  * *
 *  *
*****
*/
#include<stdio.h>
void hollow_mirrortriangle();
void hollow_mirrortriangle(){
  int i,j,space;
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

}
int main(){
 hollow_mirrortriangle();
return 0;
}
