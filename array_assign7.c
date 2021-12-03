// WAP to sort the array of os,1s,2s
#include<stdio.h>
int main(){
int n,i,tem,j;
 printf("Enter elements number\n");
 scanf("%d",&n);
int arr[n];
 printf("Enter %d elements\n",n	); 
 for(i=0; i<n; i++)
   scanf("%d",&arr[i]);
     printf("============================\n");
     printf("Orignal elements...\n");  
 for(i=0; i<n; i++)
   printf("%d\t",arr[i]);
   printf("\n");

  for(i=0; i<n; i++){
      for(j=i+1; j<n; j++){
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
return 0;
}
