//12th assignment to calculate the power of any given number using do-while
#include<stdio.h>
int main(){
 int n,p,result=1;
 printf("enter number:\n");
 scanf("%d",&n);
 printf("enter power:\n");
 scanf("%d",&p);
  do{
	result=n*result;
	p--;
    }while(p!=0);
	printf("Result: %d\n",result);
return 0;
}
