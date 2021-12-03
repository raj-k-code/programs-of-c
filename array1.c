// Sum of all elements of array
#include<stdio.h>
int main(){
 int n,i,sum=0;
  printf("Enter limit of elements:\n");
  scanf("%d",&n);
 int a[n];
for(i=0; i<n; i++){
   printf("enter %d element\n",(i+1));
   scanf("%d",&a[i]);
}
  printf("Data....\n\n");
 for(i=0; i<n; i++){
 sum=sum+a[i];
 printf("%d\n",a[i]);

}
   printf("Sum of your data: %d\n",sum);
 return 0;
}
