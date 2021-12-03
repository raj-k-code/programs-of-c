// Find maximum and minimum element in array
#include<stdio.h>
int main(){
int n,i,min,max;
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
  
min=max=arr[0];
     for(i=1; i<n; i++){        
           if(max<arr[i])
               max=arr[i];
           if(min>arr[i])
              min=arr[i];
      
         }
       printf("Maximum:%d\n",max);
       printf("Minimum:%d\n",min);   
         
return 0;
}
