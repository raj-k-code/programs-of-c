// calculate sum of following serise 1-2+3-4+5-6....+-n
#include<stdio.h>
int main(){
 int n,i=1,sum=0;
 printf("Enter number of turms:\n");
 scanf("%d",&n);
 do{ 
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
  }while(i<=n);
 printf("sum of yuor serise(1 -2 +3..+-n): %d\n",sum);
return 0;
}
