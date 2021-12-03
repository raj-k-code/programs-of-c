//print all palindrome number from 101 to 999 using for loop 
#include<stdio.h>
int main(){
 int n,r,s=0,i=101;
for(; i<=999; i++){
  for(n=i,s=0; n!=0; n/=10){
        r=n%10;
	s=s*10+r;
       }  
      if(i==s)
	printf("palindrome number:%d\n",s);
}
return 0;
}
