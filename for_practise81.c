/*binary pattern
	1
	01
	101
	0101
	10101
*/
#include<stdio.h>
int main(){
 int i,j=1;
for(i=1; i<=6; i++){
    for(j=i-1; j>=1; j--){
       if(j%2==0)
       printf("0");
       else
       printf("1");
     }
   printf("\n");
}
return 0;
}
