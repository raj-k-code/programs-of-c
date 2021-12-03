//array  me positive element fir negative element arrange karo without changing order
#include<stdio.h>
int main(){
int n,i,j,k,temp;
 printf("Enter elements number\n");
 scanf("%d",&n);
int arr[n];
 printf("Enter %d elements (positive negative both)\n",n); 
 for(i=0; i<n; i++)
   scanf("%d",&arr[i]);
     printf("============================\n");
     printf("Orignal elements...\n");
 for(i=0; i<n; i++)
   printf("%d\t",arr[i]);
   printf("\n");

 for(i=0; i<n; i++){
    if(arr[i]<0){
        for(j=i+1; j<n; j++){
             if(arr[j]>0){
                 for(k=j; k>i; k--){
                     temp=arr[k];
                     arr[k]=arr[k-1];
		     arr[k-1]=temp;
                  }
               break;
             }
        }
    }
}
   
   printf("After changing...\n");
   for(i=0; i<n; i++)
      printf("%d\t",arr[i]);
      printf("\n");


return 0;
}
