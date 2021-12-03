// to print fibbonacci serise like 0 1, 1, 2, 3, 5, 8, 13
#include<stdio.h>
int main(){
int a,b,c,n;
int *p=&a,*q=&b,*r=&c,*s=&n;
 *p=-1;
 *q=1;
printf("enter a limit of number:\n");
scanf("%d",s);
while(*s!=0){
 *r=*p+*q;
 printf("%d\n",*r);
 *p=*q;
 *q=*r;
 n--;
}
/*
int i=1;
a=0;
b=1;
printf("%d\n%d\n",a,b);

while(i<=(n-2)){
 c=a+b;
 printf("%d\n",c);
 a=b;
 b=c;
i++;
}*/

return 0;
}
