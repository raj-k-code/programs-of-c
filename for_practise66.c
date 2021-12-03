/*
	1111
	2222
	3333
	4444	
*/
#include<stdio.h>
int main(){
 int i,j,n;
   printf("Enter rows number:\n");
   scanf("%d",&n);  

  for(i=1; i<=n; i++){
     for(j=1; j<=n; j++){
     printf("%d",i);
    }
   printf("\n");
}
return 0;
}
