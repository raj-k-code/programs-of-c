//wap to calculate the sum of following serise 1/1!+2/2!+3/3!.....n/n!
#include<stdio.h>
int main(){
 float sum=0; float *t=&sum;
 int n,num,f=1,i=1;
 int *p=&n,*q=&num,*r=&f;
 printf("enter number of turms\n");
 scanf("%d",p);
i=1;
while(i<=*p){
 *q=i;
 *r=1;
 while(*q!=1){
 *r=*r**q;
 *q--;
} 
	*t=*t+i/(*(float*)r);
i++;
}
printf("%f",*t);
return 0;
}

