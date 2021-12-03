//to check whether the traingle is equilateral,scalene or isosceles
#include<stdio.h>
int main(){
 int a,b,c;
printf("Enter three side of a traingle\n ");
scanf("%d%d%d",&a,&b,&c);

if(a==b && b==c)
 printf("given traingle is equilateral\n");
else
if(a==b || b==c || c==a)
 printf("given traingle is isosceles\n");
else
printf("given traingle is scalene\n");







return 0;
}
