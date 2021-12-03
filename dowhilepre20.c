// to print fibbonacci serise like 0 1, 1, 2, 3, 5, 8, 13 using do-while loop
#include<stdio.h>
int main(){
int a,b,c,n;
 a=-1;
 b=1;
printf("enter a limit of number:\n");
scanf("%d",&n);
do{
 c=a+b;
 printf("%d\n",c);
 a=b;
 b=c;
 n--;
}while(n!=0);

return 0;
}
