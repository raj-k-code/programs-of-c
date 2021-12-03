// Q7. sub array with given sum
#include<stdio.h>
int main(){
int n,i,flag=0,j,sum=0,givensum;
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

 printf("enter given sum:\n");
  scanf("%d",&givensum);  
 for(i=0; i<n-1; i++){
    sum=arr[i];
    for(j=i+1; j<n; j++){
       sum=sum+arr[j];
        if(sum==givensum){
         flag=1;
         break;
        }
        else if(sum>givensum)
              break;
    }
  if(flag)
   break;
}
   if(flag){
     printf("sub array found from %d to %d index\n",i,j);
   }
   else
     printf("No sub array found\n");
return 0;
}
