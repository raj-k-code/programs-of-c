//to calculate gross salary
#include<stdio.h>
int main(){
 int bs;
 float hra=0,da=0,gs;
 printf("enter basic salary:\n");
 scanf("%d",&bs);
if(bs<=10000)
{
 hra=(bs*20)/100.0f;
 da=(bs*80)/100.0f;
}
else

if(bs<=20000)
{
hra=(bs*25)/100.0f;
 da=(bs*90)/100.0f;
}
else
{
hra=(bs*30)/100.0f;
 da=(bs*95)/100.0f;
}
gs=hra+da+bs;
printf("HRA:%.2f\n",hra);
printf("DA:%.2f\n",da);
printf("Gross salary:%.2f\n",gs);

return 0;
}
