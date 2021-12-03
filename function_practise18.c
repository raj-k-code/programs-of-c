/*Hollow inverted pyramid using function
* * * * * * * * * * * 
 *                 * 
  *               * 
   *             * 
    *           * 
     *         * 
      *       * 
       *     * 
        *   * 
         * * 
          * 

*/
#include<stdio.h>/*
void hollowinverted_pyramid();
void hollowinverted_pyramid(){
   int i,j,space;
 for(i=1; i<=11; i++){
     for(space=1; space<i; space++)
       printf(" ");
	for(j=11; j>=i; j--){
        if(j==11||i==1||i==j)
	printf("* ");
	else
	printf("  ");
        }
  
    printf("\n");
}

}
int main(){
 hollowinverted_pyramid();
*/
int main(){
int i;
char name[100];
printf("enter name\n");
//for(i=0; i<10; i++){
scanf("%s",name);

//}
//for(i=0; i<10; i++)
printf("%s\n",name);
return 0;
}
