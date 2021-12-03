//print all palindrome number from 101 to 999
#include<stdio.h>
int main(){
 int n,r,s=0,i=101;
while(i<=999)
{ n=i;
  s=0;
  
    while(n!=0)
      { r=n%10;
        s=s*10+r;
        n=n/10;
      }
       if(i==s)
        printf("palindrome number:%d\n",s);

       
      i++;

}

return 0;
}
