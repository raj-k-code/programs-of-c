//WAP to find lowest number among four differrent number
#include<stdio.h>
int main(){
 int a,b,c,d;
printf("enter four values\n");
scanf("%d%d%d%d",&a,&b,&c,&d);
if(a<b&&a<c&&a<d)
 printf("%d is lowest\n",a);
else
{
if(b<c&&b<d)
printf("%d is lowest\n",b);

else
if(c<d)
printf("%d is lowest\n",c);

else
printf("%d is lowest\n",d);
}






return 0;
}
