//to print digit in word form
#include<stdio.h>
int main(){
 int n,r,s=0;
 printf("enter a number:\n");
 scanf("%d",&n);
while(n!=0){
 r=n%10;
 s=s*10+r;
 n=n/10;
} 
while(s!=0){
 r=s%10;
switch(r)
 { case 0:printf("Zero ");
   break;
   case 1:printf("One ");
   break;
   case 2:printf("Two ");
   break;
   case 3:printf("Three ");
   break;
   case 4:printf("Four ");
   break;
   case 5:printf("Five ");
   break;
   case 6:printf("Six ");
   break;
   case 7:printf("Seven ");
   break;
   case 8:printf("Eight ");
   break;   
   case 9:printf("Nine ");
   break;
  }
   s=s/10;
}
return 0;
}
