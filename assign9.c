//calculate percentage and grade
#include<stdio.h>
int main(){
int p,c,b,m,e,total;
float per;
printf("enter physics marks:\n");
scanf("%d",&p);

printf("enter chemistry marks:\n");
scanf("%d",&c);

printf("enter biology marks:\n");
scanf("%d",&b);

printf("enter maths marks:\n");
scanf("%d",&m);

printf("enter english marks:\n");
scanf("%d",&e);
printf("\n==============================\n");
total=p+c+b+m+e;
printf("Total:%d\n\n",total);

per=total/5.0f;
printf("Percentage:%.2f\n\n",per);

if(per>=90)
 printf("passed with A grade\n");
else

{
if(per>=80)
printf("passed with B grade\n");
else

if(per>=70)
printf("passed with C grade\n");
else

if(per>=60)
printf("passed with D grade\n");
else

if(per>=40)
printf("passed with E grade\n");
else
 printf("FAIL\n");
}
printf("\n==============================\n");


return 0;
}
