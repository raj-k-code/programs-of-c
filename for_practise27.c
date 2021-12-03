// to print fibbonacci serise like 0 1, 1, 2, 3, 5, 8, 13 using for loop
#include<stdio.h>
int main(){
int a,b,c,n;
 a=-1;
 b=1;
printf("enter a limit of number:\n");
scanf("%d",&n);
for(; n!=0; n--){
     c=a+b;   
     printf("%d\n",c);
     a=b;
     b=c;
}

return 0;
}
