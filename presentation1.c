// Marksheet
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void gotoxy(int x,int y)
{
  printf("%C[%d;%df",0x1B,y,x);
}
int main(){
 char name[50],college[100],roll[25],year[10];
 int i,j;
  printf("Enter your name:-\n");
  gets(name);
  printf("Enter Roll Number:-\n");
  gets(roll);
  printf("Enter year:-\n");
  gets(year);
  printf("Enter your college name:-\n");
  gets(college);
  //printf("Enter your subject name:-\n");
  //gets(subject);

  //printf("Enter your name:-\n");
  //gets(name);

 
  for(i=2; i<=30; i++){
     for(j=1; j<=70; j++){
        if(i==2|| i==30|| j==1|| j==70){
          gotoxy(j,i);
          printf(".");

        }
        else if(i==5)
               printf("=");
             else
               printf(" ");
     }   
  }
      gotoxy(20,3);
      printf("DEVI AHILYA VISHWAVIDYALYA,INDORE");
      //gotoxy(32,6);
      //printf("SUBJECT");
      gotoxy(23,7);
      printf("BECHLOR OF COMPUTER APPLICATION\n"); 
      gotoxy(21,4);
      printf("%s\n",college);
      gotoxy(2,8);
      printf("Student name:%s\n",name);

return 0;

}/*
void basicDetail(){
		printf("Please enter the semester & session of the degree: \n");
		scanf("%d%d", &sem,&session);
		printf("Please enter roll no: \n");
		scanf("%s",roll);
		printf("Please enter enrollment no: ");
		gets(enroll);
		getchar();
		printf("STUDENT NAME: ");
		gets(name);
		printf("FATHER/HUSBAND NAME: ");
		gets(fatherName);
		printf("R/P: ");
		scanf("%s",rp);
		getchar();
		printf("COLLEGE NAME: ");
		gets(clg);
		system("cls");
		}
		void basicPrint(){
		printf("\t\t\t\tDEVI AHILYA VISHWAVIDHYALAYA, INDORE\n");
		printf("\t\t\t\t\tSTATEMENT OF MARKS\n");
		printf("\t\t\t     (GRADE 'A+' UNIVERSITY, ACCREDIATED BY NAAC)\n");
		printf("\t\t\t    BCA %d YEAR EXAM\t\t\tMAR-APR %d\n",sem,session);
		printf("\t\tRoll No: %s",roll);
		printf("\t\t\tSTUDENT NAME: ");
		puts(name);
		printf("\n\t\tEnrollment No: DX/");
		puts(enroll);
		printf("\t FATHER/HUSBAND NAME: ");
		puts(fatherName);
		printf("\t\tR/P: %s",rp);
		printf("\t\t\t\tCOLLEGE NAME: ");
		puts(clg);
}*/

/*
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void gotoxy(x,y){
printf("%C[%d;%df",0x1B,y,x);
}
int i,j;

void patter()
{
 for(i=12; i<=30; i++){
     for(j=1; j<=85; j++){
        if( j==1||j==50 || j==33||j==19){
          gotoxy(j,i);
          printf("|");

        }
        else if(i==14 && j<51|| i==12 && j<51||  i==28&&j<51)
               printf("‾");
             else if(i==30 && j<51)
                     printf("_");
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
 int p,q,j,m,n,x=12,i,k=0,atkt=0,c[10],sum=0,w=1,I=0,al[10],ad=0,sem,session;
 char name[30],father[30], roll[15],enroll[15],rp[7], clg[100];
system("clear");
                printf("Enter your name:-\n");
                gets(name);
                printf("Father/Husband Name:- \n");
                gets(father);
                printf("Please enter the semester & session of the degree:- \n");
		scanf("%d%d", &sem,&session);
		printf("Please enter roll no:- \n");
		scanf("%s",roll);
		printf("Please enter enrollment no:- \n");
		gets(enroll);
	        getchar();
		printf("Regular/Private:- \n");
		gets(rp);
		getchar();
		printf("COLLEGE NAME:- \n");
		gets(clg);
                getchar();
                getchar();
		system("clear");
		//getchar();
                //getchar();
// do{  sum=0,k=0,atkt=0;
    for(i=0;i<5;i++){
    // getchar();
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
   gotoxy(8,0);
    printf("DEVI AHILYA VISHWAVIDHYALAYA, INDORE\n");
   gotoxy(16,2);
    printf("STATEMENT OF MARKS\n");
   gotoxy(4,3);
    printf("(GRADE 'A+' UNIVERSITY, ACCREDIATED BY NAAC)\n");

   gotoxy(4,4);
    printf("BCA SEM-%d\t\t\t\tYEAR-%d",sem,session);
   gotoxy(4,6);
    printf("Roll No:%s\t\tStudent Name:%s",roll,name);
   gotoxy(4,7);
    printf("Enrollment No:%s\t\tF/H Name:%s",enroll,father);
   gotoxy(4,8);
    printf("R/P:%s\t\tCollege Name:%s",rp,clg);

//red();
patter();
//reset();
//yellow(); 


//printf("Name of Student %s");
gotoxy(4,x-2);
printf("Subject");
gotoxy(22,x-2);
printf("type");
gotoxy(37,x-2);
printf("obt.Marks\n");
for(i=0;i<5;i++){
  if(f[i].theory>=17) {
   x=x+1;
   gotoxy(4,x);
	      printf("%s",f[i].name);
	      gotoxy(22,x);
	      printf("Theory");
	      gotoxy(40,x);
	      printf("%d\n",f[i].theory);
	  c[k++]=f[i].theory;
    }
    else{
    x=x+1;
	   gotoxy(4,x);
	      printf("%s",f[i].name);
	      gotoxy(22,x);
	      printf("Theory");
	      gotoxy(40,x);
	      printf("%d   ATKT\n",f[i].theory);
       c[k++]=f[i].theory;
    strcpy(s[atkt++],f[i].name);
    }
  if(strcmp(f[i].name,"c")==0||strcmp(f[i].name,"p.c.s")==0)
     {
       if(f[i].practical>=10) {
       x=x+1;
   gotoxy(4,x);
	      printf("%s",f[i].name);
	      gotoxy(22,x);
	      printf("Practical");
	      gotoxy(40,x);
	      printf("%d\n",f[i].practical);
	      c[k++]=f[i].practical;
	}
	else {
	x=x+1;
	gotoxy(4,x);
	printf("%s",f[i].name);
	      gotoxy(22,x);
	      printf("Practical");
	      gotoxy(40,x);
	      printf("%d   ATKT\n",f[i].practical);

	       c[k++]=f[i].practical;


	strcpy(s[atkt++],f[i].name);
      }
      }
  else
       if(f[i].inter>=5) {
       x=x+1;
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
       x=x+1;
       gotoxy(4,x);
	printf("%s",f[i].name);
	      gotoxy(22,x);
	      printf("Internal");
	      gotoxy(40,x);
	      printf("%d   ATKT\n",f[i].inter);
    //  printf("%s\tIN\t*%d\n",f[i].name,f[i].inter);
	c[k++]=f[i].inter;
	strcpy(s[atkt++],f[i].name);

	}
	}
	reset();
	//x=2;
      if(atkt<=4&&atkt>0)
      {//x=x+2;
        gotoxy(4,26);
        //  printf("%d the value of=",x);
	
       printf("supply/atkt\n");
       for(i=0;i<atkt;i++)
       {
	//printf(" %d.%s\n\t",i+1,s[i]);
      //  printf("Enter the Marks of theory
        
       
	}
      }
      else if(atkt>4)
	{
//     x=x+2;
       // printf("%d the value of=",x);
        gotoxy(4,26);
	printf(" FAIL\n");
	atkt=0;
	//continue;
       
	}
       else
       {
  //       x=x+2;
         gotoxy(4,26);
	       printf("PASS\n");
	//printf("Your go to next semestor\n");
          
      }
      for(i=0;i<k;i++)
     { sum=sum+c[i];}
       gotoxy(24,26);
       printf(" TOTAL\t\t%d\n",sum);
       al[I++]=sum;
        printf("\n\n\n");

//getch();
w++;
x=6;
//printf("\n\n\n\n");

//}while(w<=2);

gotoxy(4,27);
printf("Total Number your goted in degree exam:");
for(j=0;j<I;j++)
{
ad=ad+al[j];
}
printf("%d\n",ad);
 
return 0;
 }
*/
