//Find the union and intersaction of two array
#include<stdio.h>
int main(){
int n1,n2,i,j,k=0,element,uni[10]={0};
 printf("Enter first array elements number\n");
 scanf("%d",&n1);
int a[n1];
 printf("Enter %d elements\n",n1); 
 for(i=0; i<n1; i++)
   scanf("%d",&a[i]);
       printf("============================\n");
       printf("Orignal first array...\n");
 for(i=0; i<n1; i++)
       printf("%d\t",a[i]);
       printf("\n");

  printf("Enter second array elements number\n");
  scanf("%d",&n2);
int b[n2];
    printf("Enter %d elements\n",n2); 
 for(i=0; i<n2; i++)
   scanf("%d",&b[i]);
       printf("============================\n");
       printf("Orignal second array...\n");
 for(i=0; i<n2; i++)
       printf("%d\t",b[i]);
       printf("\n");

 for(i=0; i<n1; i++){
    element=a[i];
      for(j=0; j<10; j++){
          if(uni[j]==element)
           break;
       }
   if(j>=10)
      uni[k++]=element;
}
 
 for(i=0; i<n2; i++){
    element=b[i];
      for(j=0; j<k; j++){
          if(uni[j]==element)
           break;
       }
   if(j>=k)
      uni[k++]=element;
}
   printf("Union array..\n");
   for(i=0; i<k; i++)
      printf("%d\t",uni[i]);
      printf("\n");

   printf("\nElements in union array %d\n",k);

  printf("\nIntersaction array..\n");
  int common[10],l=0;
  for(i=0; i<n1; i++){
     for(j=0; j<n2; j++){
       if(a[i]==b[j]){
          common[l++]=a[i];
          break;
       }   
    }
}
  if(l!=0){
     for(i=0; i<l; i++)
       printf("%d ",common[i]);
     printf("\n");       
  }
  else
    printf("\nno common element found\n");
return 0;
}
