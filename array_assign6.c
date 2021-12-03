// Find occurance of an integer number in array
#include<stdio.h>
int main(){
int n,i,num,count=0;
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
 
    printf("Enter number to find occurance\n");
    scanf("%d",&num);
  for(i=0; i<n; i++){
    if(arr[i]==num)
     count++; 
   } 
   
   printf("Occurance of %d is %d \n",num,count);    



return 0;
}
