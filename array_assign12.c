//Count pair with given sum
#include<stdio.h>
int main(){
int n,i,count=0,j,givensum;
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
     for(j=i+1; j<n; j++){
        if((arr[i]+arr[j])==givensum)
          count++;
      }
}
 if(count!=0)
   printf("Total pair %d\n",count);
 else
    printf("No pair found\n");

return 0;
}

