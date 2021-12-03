/*binary pattern
	0
	10
	010
	1010
	01010	
*/
#include<stdio.h>
int main(){
 int i,j=1;
for(i=1; i<=6; i++){
    for(j=i-1; j>=1; j--){
       if(j%2==0)
       printf("1");
       else
       printf("0");
     }
   printf("\n");
}
return 0;
}
