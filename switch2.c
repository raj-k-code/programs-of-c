//calculater by switch case
#include<stdio.h>
int main(){
 int a,b,c;
 char ch; float d;
 printf("enter two numbers:\n");
 scanf("%d%d",&a,&b);
 printf("For addition enter \"+\" \n");
 printf("For substraction enter \"-\" \n");
 printf("For multiplication enter \"*\" \n");
 printf("For division enter \"/\" \n");
 printf("For modulus enter \"%%\" \n\n"); 
 scanf("%c",&ch);
 printf("Enter your choise:\n");
 scanf("%c",&ch);
 printf("========================================\n");
 switch(ch)
{
  case '+':c=a+b;
   printf("Addition:%d Ans..\n",c);
  break;
  case '-':c=a-b;
   printf("Substraction:%d Ans..\n",c);
  break;
  case '*':c=a*b;
   printf("Multiplication:%d Ans..\n",c);
  break;
  case '/':d=(float)/b; //d=(a*1.0f)/b;
   printf("Division:%.2f Ans..\n",d);
  break;
  case '%':c=a%b;
   printf("Modulus:%d Ans..\n",c);
   break;
 default: printf("Invalid input...\n");
}
 printf("========================================\n");
return 0;
}
