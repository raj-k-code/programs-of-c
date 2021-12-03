//fehrnite to cecius or celcius to fehrnite
#include<stdio.h>
int main(){
 char a;
 float tem;
 printf("enter \"c\" for fehrnite to celcius\n");
 printf("enter \"f\" for celcius to fehrnite\n");
 scanf("%c",&a);

if(a=='c'||a=='C')
{
 printf("enter fehrnite temperature:\n");
 scanf("%f",&tem);
tem=(tem-32)*5/9.0f;
 printf("after changing fehrnite to celcius:%f",tem);
}
else 
{
if(a=='f'||a=='F')
{
printf("enter celcius temperature:\n");
 scanf("%f",&tem);
tem=(tem*9/5.0f)+32;
 printf("after changing celcius to fehrnite:%f",tem);
}	
else
printf("invalid input");
}


return 0;
}
