/*
	********1********
	*******2*2*******
	******3*3*3******
	*****4*4*4*4*****
	****5*5*5*5*5****

*/
 #include<stdio.h>
int main(){
  int i,j,space;
for(i=1; i<=5; i++){
 for(space=9; space>i; space--){
   printf("*");
   }
 
 for(j=1; j<=9; j++){
 	 if(j<i)
 	 printf("%d*",i);
  
 	 else if(i==j)     
 	 printf("%d",i);
         else
         printf("*");
 }
  printf("\n");
}

return 0;
}  
