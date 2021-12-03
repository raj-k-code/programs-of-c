// write a 'c' program to print Name in star pattern
#include<stdio.h>
int main(){
 int i,j,space,k=1;
 char a,ch;
  printf("FOR EXIT PESS \"0\" \n\n");

  printf("Enter a capital letter(A-Z):\n");
  scanf("%c",&a);
  //getchar();    
    for(i=1; i<=5; i++){
	  for(space=5; space>i; space--)
	     printf(" ");
	     for(j=1; j<=2*i-1; j++){
		if(j==1|| j==2*i-1|| i==4)
		printf("*");     
		else
		printf(" ");
	     }

	    for(j=1; j<=4; j++){
		if(j==1|| i==1 || i==5|| j==2*i-1|| i==4 && j==3|| i==3 && j<4 )
		printf("*");
		else
		printf("  ");
		}
	     
           for(i=1; i<=6; i++){
	     for(j=1; j<=5; j++){
	      if(j==1 && i>1 && i<6|| i==1 && j>1|| i==6 && j>1)
		printf("*");
	      else
	      printf(" ");
	      }

	     for(j=1; j<=5; j++){
	      if(j==1 || i==1 || i==6|| j==4 && j>1 && j<6)
		printf("*");
	      else
	      printf("  ");
	      }
	   }

 
return 0;
}
