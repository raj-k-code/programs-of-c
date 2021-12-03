/*print lower tringle matrix or upper tringle matrix 
   1   0   0   
   4   5   0
   7   8   9
 
   1   2   3
   0   5   6
   0   0   9

*/
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
    printf("lower trigle matrix..\n");     
      for(i=0; i<r; i++){
        for(j=0; j<c; j++){
           if(i>=j)
            printf("%4d",a[i][j]);
           else
            printf("   0");
        }
       printf("\n"); 
     }
   printf("upper trigle matrix..\n");     
      for(i=0; i<r; i++){
        for(j=0; j<c; j++){
           if(i>j)
            printf("   0");           
           else
            printf("%4d",a[i][j]);
        }
       printf("\n"); 
     }

return 0;
}
