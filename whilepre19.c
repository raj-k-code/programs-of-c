// to print fibbonacci serise like 0 1, 1, 2, 3, 5, 8, 13
#include<stdio.h>
int main(){
int a,b,c,n;
 a=-1;
 b=1;
printf("enter a limit of number:\n");
scanf("%d",&n);
while(n!=0){
 c=a+b;
 printf("%d\n",c);
 a=b;
 b=c;
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
