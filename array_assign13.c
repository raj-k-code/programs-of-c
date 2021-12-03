//Find common elements in three sorted arrays
#include<stdio.h>
int main(){
int n1,n2,n3,i,j,k,l=0; int common[10]={0};
 printf("Enter first array elements number(only in asceding order)\n");
 scanf("%d",&n1);
int a[n1];
 printf("Enter %d elements\n",n1); 
 for(i=0; i<n1; i++)
   scanf("%d",&a[i]);
       printf("============================\n");
      
  printf("Enter second array elements number(only in asceding order)\n");
  scanf("%d",&n2);
int b[n2];
    printf("Enter %d elements\n",n2); 
 for(i=0; i<n2; i++)
   scanf("%d",&b[i]);
       printf("============================\n");
      
  printf("Enter third array elements number(only in asceding order)\n");
  scanf("%d",&n3);
int c[n3];
    printf("Enter %d elements\n",n3); 
 for(i=0; i<n3; i++)
   scanf("%d",&c[i]);
       printf("============================\n");
 
   for(i=0; i<n1; i++){
       for(j=0; j<n2; j++){
           if(a[i]==b[j]){
              for(k=0; k<n3; k++){
                  if(a[i]==c[k]){
                     common[l++]=a[i];
                     break;
                   }                           
              }
            break; 
	   }
       }
   }
        if(l!=0){
           for(i=0; i<l; i++)
             printf("%d",common[i]);
             printf("\n");
        }
        else
           printf("no common element\n");
return 0;
}
