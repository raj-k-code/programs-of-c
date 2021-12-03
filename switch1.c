//to input 1 to 5 number and print thier spaling
#include<stdio.h>
int main(){
 int n;
 printf("enter a number(1-5):\n");
 scanf("%d",&n);
 switch(n)
 {
 case 1: printf("ONE\n");
 break;
 case 2: printf("TWO\n");
 break;
 case 3: printf("THREE\n");
 break;
 case 4: printf("FOUR\n");
 break;
 case 5: printf("FIVE\n");
 break;
 default: printf("invalid input");
}
return 0;
}
