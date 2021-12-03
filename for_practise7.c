/*to print using for loop
    *   *****
    *   * 
    * * * *
    *   *   
    *********
	*   *
      * * * *
	*   *
    *****   *	 
*/
#include<stdio.h>
 int main(){
  int i,j,n,m;
   printf("enter rows number(only odd):\n");
   scanf("%d",&n);
   printf("enter coloumn number(only odd):\n");
   scanf("%d",&m);
for(i=1; i<=n; i++){
   for(j=1; j<=n; j++){
     if(i==n/2+1||j==n/2+1||(i==1 && j>n/2+1)||(j==1 && i<n/2+1)||(i==n && j<n/2+1)||(j==n && i>n/2+1)||
        (i==3 && j==3)||(i==3 && j==7)||(i==7 && j==3)||(i==7 && j==7))
       printf("*");  
     else
       printf(" ");
  } 
    printf("\n");
}

return 0;
}
