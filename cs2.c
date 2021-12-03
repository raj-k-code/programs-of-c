//find greater bitween three numbers
#include<stdio.h>
int main(){
 int a,b,c,x;
 printf("enter three numbers\n");
 scanf("%d%d%d",&a,&b,&c);
printf("\n\n");
 if(a>b&&a>c)
 printf("%dis greater",a);                                                                                                             
else
{ 
 if(b>c)
printf("%dis greater",b);
 else
printf("%d is greater",c); 


}





return 0;
}
