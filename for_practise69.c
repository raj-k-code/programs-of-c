/*
	6666
	555
	44
	3
	
*/
#include<stdio.h>
int main(){
 int i,j,n;
   printf("Enter rows number:\n");
   scanf("%d",&n);  

  for(i=n; i>=3; i--){
     for(j=3; j<=i; j++){
     printf("%d",i);
    }
   printf("\n");
}
return 0;
}
