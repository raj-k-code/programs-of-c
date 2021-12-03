/*
	2
	33
	444
	5555
	5555
	444
	33
	2

*/
#include<stdio.h>
int main(){
 int i,j;
for(i=2; i<=5; i++){
     for(j=2; j<=i; j++){
     printf("%d",i);
    }
   printf("\n");
}

for(i=5; i>=2; i--){
     for(j=2; j<=i; j++){
     printf("%d",i);
    }
   printf("\n");
}
return 0;
}
