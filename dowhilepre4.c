//to input start and end point and then print number from start to end
#include<stdio.h>
int main(){
  int s,e;
    printf("enter starting number\n");
    scanf("%d",&s);
    printf("enter ending number\n");
    scanf("%d",&e);
      do{
	  printf("\n%d\n",s);
	  s++;
	}while(s<=e);

return 0;
}
