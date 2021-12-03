//WAP to cyclically rotate array by one
#include<stdio.h>
int main(){
int n,i,temp;
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

  temp=arr[n-1];
 for(i=n-1; i>0; i--){
    arr[i]=arr[i-1];
  }  
  arr[i]=temp;
 printf("\nAfter cyclically by one..\n");
  for(i=0; i<n; i++)
     printf("%d\t",arr[i]);
     printf("\n");
return 0;
}
