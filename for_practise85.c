/*Hollow binary pattern
	1
	01
	1 1
	0  1
	10101
*/
#include<stdio.h>
int main(){
 int i,j=1;
for(i=2; i<=6; i++){
    for(j=1; j>=i; j--){
     if(j==1|| i==6|| i==j){
       if(j%2==0)
       printf("0");
       else
       printf("1");
       }
       else
       printf(" ");
    }
   printf("\n");
}
return 0;
}
