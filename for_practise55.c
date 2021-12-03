/* hollow Half pyramid
	1
	12
	1 3
	1  4
	12345
*/
#include<stdio.h>
int main(){
  int i,j;
for(i=1; i<=5; i++){
 for(j=1; j<=i; j++){
  if(i==5|| j==1|| i==j)
  printf("%d",j);
  else
  printf(" ");
}
  printf("\n");
}
return 0;
}
