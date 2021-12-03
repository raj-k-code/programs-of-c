//WAP to check whether a charactor is an alphabet or not
#include<stdio.h>
int main(){
 char a;
 printf("Enter a charactor\n");
 scanf("%c",&a);
 if(a>='A'&& a<='z')
 printf("entered charactor:%c is a alphabet",a);
else 
printf("entered charactor:%c is not a alphabet",a);





return 0;
}
