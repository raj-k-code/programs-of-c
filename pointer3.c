// calculate sum of following serise 1-2+3-4+5-6....+-n using pointer
#include<stdio.h>
int main(){
 int n,i=1,sum=0;
 int *p=&n;
 printf("Enter number of turms:\n");
 scanf("%d",p);
 while(i<=*p){
 if(i%2==0)
{
 sum=sum+(-i);
 i++; 
 
}
else
{
 sum=sum+i;
 i++;
}
}
 
printf("sum= %d\n",sum);


/*if(n%2==0) 
 printf("%d",(-n/2));
else
{
 sum=(-(n-1/2)+n);
 printf("%d\n",sum);
}
*/

return 0;
}
