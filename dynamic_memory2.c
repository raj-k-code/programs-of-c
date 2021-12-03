// make a array using DMA
#include<stdio.h>
#include<stdlib.h>
int main(){
 int n,i;

 printf("Enter array limit:\n");
 scanf("%d",&n);
 int *p = (int *) malloc(n*sizeof(int));
printf("Enter %d elements..\n",n);
 for(i=0; i<n; i++)
    scanf("%d",(p+i)); 
printf("Data in array..\n");
 for( i=0; i<n; i++)
    printf("%d\n",*(p+i)); 
 
 return 0;
}
