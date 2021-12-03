// Find the first non-repeating element in array of integers
#include<stdio.h>
int main(){
int n,i,temp,j;
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
    for(j=0; j<n; j++){
       if(arr[i]==arr[j] && i!=j);
           break;      
    }
     if(j==n)
   temp=arr[i];    
 }
   
   printf("First non-repeating element %d\n",temp);

return 0;
}
