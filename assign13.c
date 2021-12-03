//to input electricity unit charges amd calculate total electricity bill
#include<stdio.h>
int main(){
 int totalunit,x;
 float billamount;
printf("Enter total unit of bill:\n");
scanf("%d",&totalunit);
 if(totalunit<=50)
{
billamount=totalunit*0.50;
}
else if(totalunit<=150)
 billamount=25+((totalunit-50)*0.75);
else if(totalunit<=250)
 billamount=100+((totalunit-150)*1.20);
else
 billamount=220+((totalunit-250)*1.50);

billamount=billamount+(billamount*20)/100;
printf("Total bill:%f\n",billamount);








return 0;
}
