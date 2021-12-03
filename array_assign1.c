//peak an element
#include<stdio.h>
int main(){
int n,i,k=0;
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
      printf("NOTE: output is 1 means there is peak element..\n");
      printf("NOTE: output is 0 means there is not peak element..\n"); 
 for(i=0; i<n; i++){
   if(arr[i] > arr[i-1] && arr[i] > arr[i+1]){
          k=1;
          break;}
  else if(arr[i-1]<0 && arr[i] > arr[i+1]){
          k=1;
          break;}
        else if(arr[i+1]>n && arr[i] > arr[i-1]){
               k=1;            
               break;}
    
             else
                k=0;            
 }  
   if(k!=0)
    printf("\n1\n");
   else
    printf("\n0\n");

return 0;
}
