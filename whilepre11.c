//print all armstrong number from 101 to 999
#include<stdio.h>
int main(){
 int n,r,s=0,i=101;
 printf("all armstrong number from 101 to 999\n\n");
while(i<=999)
{ n=i;
  s=0;
  
    while(n!=0)
      { r=n%10;
        s=s+r*r*r;
        n=n/10;
      }
       if(i==s)
        printf("armstrong number:%d\n",s);

       
      i++;

}

return 0;
}
