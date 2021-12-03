//print right diagonal elements of matrix
#include<stdio.h>
int main(){
  int r,c,i,j; 
 printf(" enter rows number first and column\n");
 scanf("%d %d",&r,&c);
 int a[r][c]; 
 
  printf("enter (%dx%d) matrix\n",r,c);
  printf("Enter matrix values\n");
  for(i=0; i<r; i++){
     printf("enter %d element of %d rows\n",c,(i+1));
     for(j=0; j<c; j++){
        scanf("%d",&a[i][j]);
      }
   }
   printf("Origenal matrix..\n");
      for(i=0; i<r; i++){
        for(j=0; j<c; j++){
           printf("%4d",a[i][j]);
        }
       printf("\n"); 
     }
   printf("right diagonal elements of matrix..\n");
      for(i=0; i<r; i++){
         for(j=0; j<c; j++){
           if((i+j)==r-1) 
            printf("%d ",a[i][j]);
         }	
      }
 /*
       for(i=0; i<r; i++){
          for(j=0; j<c; j++){
            if((i+j)==r-1)
            printf("%d ",a[i][j]);
            else
	    printf(" ");
          }
         printf("\n");
      }

*/
return 0;
}
