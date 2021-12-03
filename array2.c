/*Basic operation of array
	inserting an element 
	deleting an element
	traversing
	merging 
	searching 
	sorting 
*/

#include<stdio.h>
//#define MAX 6
int main(){
 int i,x,pos,n,ch,k=0,tem,j;
  printf("Enter element numbers\n");
  scanf("%d",&n);
 int arr[n];
 int position[n];
 printf("enter %d element\n",n);
  for(i=0; i<n; i++)
    scanf("%d",&arr[i]);

 printf("enter 1 for inserting array\n");
 printf("enter 2 for deleting array\n");
 printf("enter 3 for traversing array\n");
 printf("enter 4 for searching array\n");
 printf("enter 5 for sorting array\n");

 scanf("%d",&ch);

switch(ch){

  case 1: printf("before inserting...\n");
	  for(i=0; i<n; i++)
	     printf("%d\t",arr[i]);
	     printf("\n");
	 printf("enter element to insert\n");
	 scanf("%d",&x);

	 printf("enter position to insert\n");
	 scanf("%d",&pos);
	   n++;	
	if(pos<=n){ 
	 for(i=n-1; i>=pos; i--){
	     arr[i]= arr[i-1];
	   }
	 arr[pos-1]=x;
	  printf("after inserting...\n");

	 for(i=0; i<n; i++){
	    printf("%d\t",arr[i]);
	 }
	  printf("\n");
	}
	else
	  printf("it's not possible\n");
     break;

  case 2: printf("Before deleting...\n");
	  for(i=0; i<n; i++)
	     printf("%d\t",arr[i]);
	     printf("\n");
          printf("enter position to be deleted..\n");
           scanf("%d",&pos);
          for(i=pos; i<n; i++)
              arr[i-1]=arr[i];
               
            n=n-1;
        printf("after deleting...\n");
	  for(i=0; i<n; i++)
	     printf("%d\t",arr[i]);
	     printf("\n");
         break;
 case 3: for(i=0; i<n; i++)
	     printf("%d\t",arr[i]);
	     printf("\n");
        break;

 case 4: 
            
         printf("enter element to be found\n"); 
         scanf("%d",&x);
         for(i=0; i<n; i++){
           if(arr[i]==x){
             position[k]=i;
             k++;
            }
          }
         if(k!=0){
          printf("element found %d times at index ",k);
           for(i=0; i<k; i++)
            printf("%d ",position[i]);
          }
          else
           printf("Element not found\n");
          break;
 case 5: printf("Before sorting..\n");
            for(i=0; i<n; i++){
	     printf("%d\t",arr[i]);
              }
	     printf("\n");

          for(i=0; i<n; i++){
            for(j=i+1; j<n; j++){ 

               if(arr[j]>arr[i]){                     
                 tem=arr[j];
		 arr[j]=arr[i];
		 arr[i]=tem;
                   }      
                }   
            }
/*
          for(i=0; i<n; i++){
            for(j=i+1; j<n; j++){ 

               if(arr[j]<arr[i]){                     
                 tem=arr[j];
		 arr[j]=arr[i];
		 arr[i]=tem;
                   }      
                }   
            }
 */
         printf("After descending sorting..\n");
          for(i=0; i<n; i++)
	    printf("%d\t",arr[i]);
	    printf("\n");
         break;
    

         
}
return 0;
}
