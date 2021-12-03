// wap to add two matrix
#include<stdio.h>
int main(){
  int r,c,i,j,k; 
 printf("For both  matrix enter rows number first and column\n");
 scanf("%d %d",&r,&c);
 int a[r][c], b[r][c]; 
 int sum[r][c];
  printf("enter (%dx%d) matrix\n",r,c);
  printf("Enter first matrix values\n");
  for(i=0; i<r; i++){
     printf("enter %d element of %d rows\n",c,(i+1));
     for(j=0; j<c; j++){
        scanf("%d",&a[i][j]);
      }
   }
  printf("Enter second matrix values\n");
  for(i=0; i<r; i++){
     printf("enter %d element of %d rows\n",c,(i+1));
     for(j=0; j<c; j++){
        scanf("%d",&b[i][j]);
      }
   }
    for(i=0; i<r; i++){
        for(j=0; j<c; j++){
            sum[i][j]=0;
           for(k=0; k<c; k++){ 
            sum[i][j]+=a[i][k]*b[k][j];
           }
        }
    }
   for(i=0; i<r; i++){
        for(j=0; j<c; j++){
           printf("%4d",sum[i][j]);
        }
       printf("\n"); 
   }
return 0;
}




