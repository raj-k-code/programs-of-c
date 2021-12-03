//12th assignment to calculate the power of any given number using pointer
#include<stdio.h>
int main(){
 int n,p,result=1;
 int *a=&n,*b=&p,*r=&result;
 printf("enter number:\n");
 scanf("%d",a);
 printf("enter power:\n");
 scanf("%d",b);
while(*b!=0){
 *r=*a**r;
 p--;

}
 printf("Result:%d\n",*r);



return 0;
}
