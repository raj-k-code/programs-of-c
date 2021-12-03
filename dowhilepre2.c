// to print a menu of atm using do-while
#include<stdio.h>
int main(){
 int choise,bal=100000,amount;
do{
 printf("\npress 1 for withdrawal:\n");
 printf("press 2 for deposite:\n");
 printf("press 3 for balance enquiry:\n");
 printf("press 4 for exit:\n");
 printf("Please enter your choise:\n");
 scanf("%d",&choise);
 switch(choise){
     case 1: printf("Enter amount to be withdrawal..\n");
             scanf("%d",&amount);
             if(amount<=bal){
              printf("Withdrawal success\nPleas collect your money..\n");
              bal=bal-amount;
              printf("Remaining balance %d\n",bal);
              }
             else
               printf("Insufficient balance..\n");
             break;
    case 2:  printf("Enter amount to be deposite..\n");
             scanf("%d",&amount);
             bal=bal+amount;
             printf("Now your total balance:%d\n",bal);
             break;
    case 3:  printf("your corrent balance: %d\n",bal);
             break;
    case 4:  exit(0);
            }
      }while(1);

return 0;
}
