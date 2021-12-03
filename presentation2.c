
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
//#include<windows.h>
void gotoxy(x,y){
printf("%C[%d;%df",0x1B,y,x);
}
int i,j;
void patter()
{
 for(i=2; i<=40; i++){
     for(j=1; j<=80; j++){
        if(i==2 && j<51|| i==40 && j<51|| j==1||j==50 || i==25&&j<51|| j==33&&i<25||j==19){
          gotoxy(j,i);
          printf(".");

        }
        else if(i==5 && j<51)
               printf("=");
             else
               printf(" ");
     }   
  }
}  
 void red(){
  printf("\033[1;31m");
}

void yellow(){
  printf("\033[1;33m");
}

void reset(){
  printf("\033[0m");
}
 typedef struct first{
 char name[100];
 int inter,practical,theory;
 };
  int main()
{
char s[10][100],subject[5][100]={"maths","p.c.s","statistical","c","computer org."};
 struct first f[5];
 int p,q,j,m,n,x=4,i,k=0,atkt=0,c[10],sum=0,w=1,I=0,al[10],ad=0;
system("clear");
// do{  sum=0,k=0,atkt=0;
    for(i=0;i<5;i++){
    printf("Enter the Exterel or theory Marks of %s\n",subject[i]);
    scanf("%d",&f[i].theory);
    if(f[i].theory>50)
    {
    while(1)
    {
    printf("You enter incorrect marks\n");
    printf("Enter the theory Marks\n");
    scanf("%d",&f[i].theory);
    if(f[i].theory<=50)
      {
       break;
      }
    }
    }
    strcpy(f[i].name,subject[i]);
    if(strcmp(f[i].name,"c")==0||strcmp(f[i].name,"p.c.s")==0){
    printf("Enter the %s practical Marks\n",subject[i]);
    scanf("%d",&f[i].practical);
     if(f[i].practical>25)
    {
    while(1)
    {
    printf("You enter incorrect marks\n");
    printf("Enter the practical in 25 Marks\n");
    scanf("%d",&f[i].practical);
    if(f[i].theory<=25)
      {
       break;
      }
    }
    }


   }
   else {
   printf("Enter the %s Internal  Marks\n",subject[i]);
   scanf("%d",&f[i].inter);
    if(f[i].inter>10)
    {
    while(1)
    {
    printf("You enter incorrect marks\n");
    printf("Enter the internal Marks\n");
    scanf("%d",&f[i].inter);
    if(f[i].inter<=10)
      {
       break;
      }
    }
    }
     }
}
system("clear");
//red();
patter();
//reset();
//yellow(); 


//printf("Name of Student %s");
gotoxy(4,x);
printf("Subject");
gotoxy(22,x);
printf("type");
gotoxy(37,x);
printf("obt.Marks\n");
for(i=0;i<5;i++){
  if(f[i].theory>=17) {
   x=x+2;
   gotoxy(4,x);
	      printf("%s",f[i].name);
	      gotoxy(22,x);
	      printf("Theory");
	      gotoxy(40,x);
	      printf("%d\n",f[i].theory);
	  c[k++]=f[i].theory;
    }
    else{
    x=x+2;
	   gotoxy(4,x);
	      printf("%s",f[i].name);
	      gotoxy(22,x);
	      printf("Theory");
	      gotoxy(40,x);
	      printf("*%d\n",f[i].theory);
       c[k++]=f[i].theory;
    strcpy(s[atkt++],f[i].name);
    }
  if(strcmp(f[i].name,"c")==0||strcmp(f[i].name,"p.c.s")==0)
     {
       if(f[i].practical>=10) {
       x=x+2;
   gotoxy(4,x);
	      printf("%s",f[i].name);
	      gotoxy(22,x);
	      printf("Practical");
	      gotoxy(40,x);
	      printf("%d\n",f[i].practical);
	      c[k++]=f[i].practical;
	}
	else {
	x=x+2;
	gotoxy(4,x);
	printf("%s",f[i].name);
	      gotoxy(22,x);
	      printf("Practical");
	      gotoxy(40,x);
	      printf("*%d\n",f[i].practical);

	       c[k++]=f[i].practical;


	strcpy(s[atkt++],f[i].name);
      }
      }
  else
       if(f[i].inter>=5) {
       x=x+2;
	gotoxy(4,x);
	printf("%s",f[i].name);
	      gotoxy(22,x);
	      printf("Internal");
	      gotoxy(40,x);
	      printf("%d\n",f[i].inter);

	//printf("%s\tIN\t%d\n",f[i].name,f[i].inter);
	  c[k++]=f[i].inter;
	  }
       else {
       x=x+2;
       gotoxy(4,x);
	printf("%s",f[i].name);
	      gotoxy(22,x);
	      printf("Internal");
	      gotoxy(40,x);
	      printf("*%d\n",f[i].inter);
    //  printf("%s\tIN\t*%d\n",f[i].name,f[i].inter);
	c[k++]=f[i].inter;
	strcpy(s[atkt++],f[i].name);

	}
	}
	reset();
	//x=2;
      if(atkt<=4&&atkt>0)
      {//x=x+2;
        gotoxy(4,27);
        //  printf("%d the value of=",x);
	
       printf("supply/atkt\n");
       for(i=0;i<atkt;i++)
       {
	printf(" %d.%s\n\t",i+1,s[i]);
      //  printf("Enter the Marks of theory
        
       
	}
      }
      else if(atkt>4)
	{
//     x=x+2;
       // printf("%d the value of=",x);
        gotoxy(4,27);
	printf(" FAIL\n");
	atkt=0;
	//continue;
       
	}
       else
       {
  //       x=x+2;
         gotoxy(4,27);
	       printf("PASS\n");
	//printf("Your go to next semestor\n");
          
      }
      for(i=0;i<k;i++)
     { sum=sum+c[i];}
       gotoxy(23,27);
       printf(" TOTAL\t\t%d\n",sum);
       al[I++]=sum;
        printf("\n\n\n");

//getch();
w++;
x=4;
//printf("\n\n\n\n");

//}while(w<=2);

gotoxy(4,30);
printf("Total Number your goted in degree exam\n");
for(j=0;j<I;j++)
{
ad=ad+al[j];
}
printf("%d\n",ad);
 
return 0;
 }
