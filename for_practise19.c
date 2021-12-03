//print all armstrong number from 101 to 999 using for loop
#include<stdio.h>
int main(){
 int n,r,s=0,i=101;
 printf("all armstrong number from 101 to 999\n\n");
for(; i<=999; i++){
  for(n=i,s=0; n!=0; n/=10){
        r=n%10;
	s=s+r*r*r;
       }  
      if(i==s)
	printf("Armstrong number:%d\n",s);
}
return 0;
}

