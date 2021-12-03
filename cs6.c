#include<stdio.h>
int main(){
int bs;
float hra=0,ta=0,da=0,gs;
printf("enter basic salary:\n");
scanf("%d",&bs);
if(bs>10000)
{ hra=(bs*10)/100.0f; 
 ta=(bs*5)/100.0f; 
 da=(bs*3)/100.0f;
}
else{
 hra=(bs*5)/100.0f; 
 ta=(bs*3)/100.0f; 
}
gs=bs+hra+ta+da;
printf("HRA:%f\n",hra);
printf("TA:%f\n",ta);
printf("DA:%f\n",da);
printf("Gross salary:%f\n",gs);





return 0;
}
