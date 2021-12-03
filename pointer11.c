//print all armstrong number from 101 to 999
#include<stdio.h>
int main(){
 int n,m,s=0,i=101;
 int *p=&n,*q=&s,*r=&m;
 printf("all armstrong number from 101 to 999\n\n");
while(i<=999)
{ *p=i;
  *q=0;
  
    while(*p!=0)
      { *r=*p%10;
        *q=*q+*r**r**r;
        *p=*p/10;
      }
       if(i==*q)
        printf("armstrong number:%d\n",*q);

       
      i++;

}

return 0;
}
