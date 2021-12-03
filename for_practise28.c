//to print digit in word form using for loop
#include<stdio.h>
int main(){
 int n,r,s=0;
 printf("enter a number:\n");
 scanf("%d",&n);
for(; n!=0; n/=10){
  r=n%10;
  s=s*10+r; 
}
for(; s!=0; s/=10){
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
}
return 0;
}
