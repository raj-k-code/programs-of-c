//wap to enter a number and check it prime or not using do-while
#include<stdio.h>
int main(){
 int n,i;
 printf("enter a number to check it's prime or not:\n");
 scanf("%d",&n);
 i=2;
 do{ 
       if(n%i==0)
       break;
       i++;
   }while(i<=n/2);

 if(i>n/2)
 printf("%d is prime\n",n);
 else
 printf("%d is not prime\n",n);
return 0;
}

