/*to print using for loop
	**********
	****  ****
	***    ***
	**      **
	*        * 
*/
#include<stdio.h>
int main(){
 int i,j,n,m;
   printf("enter rows number:\n");
   scanf("%d",&n);
   printf("enter coloumn number:\n");
   scanf("%d",&m);
 for(i=n; i>=1; i--){
    for(j=1; j<=m; j++)
     {
     if(j>i && j<=m-i)
      printf(" ");  
     else
       printf("*");
     }
        printf("\n");
}
return 0;
}
