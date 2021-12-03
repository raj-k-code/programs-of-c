/*
	333
	313
	323
	333

*/
#include<stdio.h>
int main(){
 int i,j,n;
 printf("enter a number:\n");
 scanf("%d",&n);

 for(i=1; i<=4; i++){
    for(j=1; j<=3; j++){
      if(j==2 && i>1 && i<4)
      printf("%d",i-1);
      else
      printf("%d",n);
  }
  printf("\n");
}
return 0;
}                                                                         
