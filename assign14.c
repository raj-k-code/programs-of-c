//to input user choise.if user enter '+' then addition,'>'then greater ,'=' then check equal or not
#include<stdio.h>
int main(){
 int a,b,result;
 char choise;
 printf("press + for addition:\n");
 printf("press > for greater:\n");
printf("press = for checking equalitiy:\n");
printf("enter two numbers:\n");
scanf("%d%d",&a,&b);

scanf("%c",&choise);
printf("Enter your choise:\n");
scanf("%c",&choise);

if(choise =='+')
{
result=a+b;
printf("Addition:%d\n",result);
}
else if(choise == '>')
{
result=a>b?a:b;
printf("Greater:%d\n",result);
}
else if(choise == '=')
{
result=a==b;
printf("equality:%d\n",result);
}
else
 printf("Invalid choise\n");




return 0;
}
