void hollow_rombus();
void hollow_rombus(){
  int i,j,space;
for(i=9; i>=1; i--){
   for(space=1; space<i; space++)
     printf(" ");
   for(j=1; j<=7; j++){
    if(i==9|| i==1|| j==1|| j==7)
     printf("*");
    else
     printf(" ");
    }
   printf("\n");
}

}	

void rombus();
void rombus(){
  int i,j,space;
for(i=9; i>=1; i--){
   for(space=1; space<i; space++)
     printf(" ");
   for(j=1; j<=7; j++){
   printf("*");
    }
   printf("\n");
}
}
