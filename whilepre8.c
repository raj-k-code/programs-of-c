//12th assignment to calculate the power of any given number
#include<stdio.h>
int main(){
 int n,p,result=1;
 printf("enter number:\n");
 scanf("%d",&n);
 printf("enter power:\n");
 scanf("%d",&p);
while(p!=0){
 result=n*result;
 p--;

}
 printf("Result:%d\n",result);



return 0;
}
