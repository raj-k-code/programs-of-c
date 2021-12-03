// Add to numbers using dynamic memory (DMA)
#include<stdio.h>
#include<stdlib.h>
int main(){
 int *p = (int *) malloc(sizeof(int));
 int *q = (int *) malloc(sizeof(int));
 printf("Enter two numbers:\n");
 scanf("%d%d",p,q);
 printf("Result: %d",(*p+*q));
return 0;
}
