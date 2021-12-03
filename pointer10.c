//print all palindrome number from 101 to 999
#include<stdio.h>
int main(){
 int n,m,s=0,i=101;
 int *p=&n,*q=&s,*r=&m;
while(i<=999)
{ *p=i;
  *q=0;
  
    while(*p!=0)
      { *r=*p%10;
        *q=*q*10+*r;
        *p=*p/10;
      }
       if(i==*q)
        printf("palindrome number:%d\n",*q);

       
      i++;

}
return 0;
}
