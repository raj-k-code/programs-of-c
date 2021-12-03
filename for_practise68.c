/*
	10987
	654
	32
	1
	
*/
#include<stdio.h>
int main(){
 int i,j,n,k=10;
   printf("Enter rows number:\n");
   scanf("%d",&n);  

  for(i=n; i>=1; i--){
     for(j=1; j<=i; j++){
     printf("%d",k--);
    }
   printf("\n");
}
return 0;
}
