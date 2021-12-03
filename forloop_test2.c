// Test
// write a 'c' program to print number (0-9) in star pattern
#include<stdio.h>
int main(){
 int i,j,space,n;
 char ch;
do{
  printf("Enter a number (0-10):\n");
  scanf("%d",&n);
  getchar();
switch(n){
case 0:for(i=1; i<=4; i++){
	     for(j=1; j<=4; j++){
	      if(((i==1||i==4)&&(j==2|| j==3)) || ((i==2||i==3)&&(j==1|| j==4)))
		printf("*");
	      else
	      printf(" ");
	      }
	     printf("\n");
	    }
            break;	
case 1: for(i=1; i<=6; i++){
           for(j=1; j<=5; j++){
            if(j==3 || i==6 || j==(3-i+1))
             printf("*"); 
            else
             printf(" ");
             }    
               printf("\n");
          }
          break;  
case 2: for(i=1; i<=5; i++){
       	   for(j=1; j<=3; j++){
	      if( j==(4-i+1) || i==5 || i==1 && j<3)
		 printf("*"); 
	      else
		 printf(" ");
	       }    
	      printf("\n");
	     }
	     break;
case 3: for(i=1; i<=5; i++){
	    for(j=1; j<=4; j++){
		if( i==1 || i==5|| j==2*i-1|| i==4 && j==3|| i==3 && j<5 )
		printf("*");
		else
		printf("  ");
		}
	     printf("\n");
	  }
          break;
case 4: for(i=1; i<=7; i++){
	   for(j=5; j>=1; j--){
	      if(j==2 && i>1 || i==5|| j==i && i>1)
                printf("*"); 
	      else
		 printf(" ");
	       }    
	      printf("\n");
	     }
            break;
case 5:for(i=1; i<=3; i++){
	     for(j=1; j<=4; j++){
              if(i==1 || j==1)
              printf("*");
              else
              printf(" ");
              }
              printf("\n");
             }
            for(i=1; i<=4; i++){
	     for(j=1; j<=4; j++){
	      if(((i==1||i==4)&&j<4) || ((i==2||i==3)&& j==4))
		printf("*");
	      else
	      printf(" ");
	      }
	     printf("\n");
	    }
            break;

case 6: for(i=1; i<=7; i++){
	     for(j=1; j<=4; j++){
	      if(((i==4||i==7)&&(j==2|| j==3)) || ((i==5||i==6)&&(j==4)) || j==1 && i<7 && i>1 || i==1 			  && j>1)
		printf("*");
	      else
	      printf(" ");
	      }
	     printf("\n");
	    }
          break;
case 7:for(i=1; i<=6; i++){
           for(j=6; j>=1; j--){
            if( i==1 || j==i )
             printf("*"); 
            else
             printf(" ");
             }    
               printf("\n");
          }
        break;
case 8:  for(i=1; i<=4; i++){
	     for(j=1; j<=4; j++){
	      if(((i==1||i==4)&&(j==2|| j==3)) || ((i==2||i==3)&&(j==1|| j==4)))
		printf("*");
	      else
	      printf(" ");
	      }
	     printf("\n");
	    }
           for(i=2; i<=4; i++){
	     for(j=1; j<=4; j++){
	      if(((i==4)&&(j==2|| j==3)) || ((i==2||i==3)&&(j==1|| j==4)))
		printf("*");
	      else
	      printf(" ");
	      }
	     printf("\n");
	    } 
           break;
case 9:  for(i=1; i<=7; i++){
	     for(j=1; j<=4; j++){
	      if(((i==1||i==4)&&(j==2|| j==3)) || ((i==2||i==3)&&(j==1|| j==4)) || j==4 && i<7 && i>1||
                   i==7 && j<4) 
		printf("*");
	      else
	      printf(" ");
	      }
	     printf("\n");
	    }
            break;
case 10:  for(i=1; i<=6; i++){
           for(j=1; j<=5; j++){
            if(j==3 || i==6 || j==(3-i+1))
             printf("*"); 
            else
             printf(" ");
             }
            for(j=1; j<=4; j++){
	      if(((i==1||i==4)&&(j==2|| j==3)) || ((i==2||i==3)&&(j==1|| j==4)))
		printf("*");
	      else
	      printf(" ");
	      }   
             printf("\n");
          }
          break;  
case 11: for(i=1; i<=6; i++){
           for(j=1; j<=5; j++){
            if(j==3 || i==6 || j==(3-i+1))
             printf("*"); 
            else
             printf(" ");
             }
           for(j=1; j<=5; j++){
            if(j==3 || i==6 || j==(3-i+1))
             printf("*"); 
            else
             printf(" ");
             }       
	    printf("\n");
           }
	    
}
	printf("do you wanna continue (y/n)\n");
	  scanf("%c",&ch);
	  getchar();

}while(ch=='Y' || ch=='y');

return 0;
}
