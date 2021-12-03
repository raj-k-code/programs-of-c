// Find the kth largest and kth smallest element in array
#include<stdio.h>
int main(){
int n,i,tem,j,k,count=0,x=0;
 printf("Enter elements number\n");
 scanf("%d",&n);
int arr[n];
 printf("Enter %d elements\n",n	); 
 for(i=0; i<n; i++)
   scanf("%d",&arr[i]);
     printf("============================\n");
  for(i=0; i<n; i++){
      for(j=i+1; j<n	; j++){
          if(arr[i] > arr[j]){
           tem=arr[i];
           arr[i]=arr[j];
           arr[j]=tem;
          }
     }
}
   printf("after sorting in ascending order:\n");
     for(i=0; i<n; i++)
        printf("%d\t",arr[i]);
        printf("\n");

   printf("enter value of kth element...\n");
   scanf("%d",&k);
   for(i=0; i<n; i++){
      if(arr[i]!=arr[i+1]){
         count++;
        }   
     if(count==k)
        break;
 }
        printf("%dth smallest element: %d\n",k,arr[i]);

      for(i=n-1; i>=0; i--){
      if(arr[i]!=arr[i-1]){
         x++;
        }   
     if(x==k)
        break;
  }
        printf("%dth largest element: %d\n",k,arr[i]);
return 0;
}
