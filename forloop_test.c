// Test
// write a 'c' program to print alphabate (A-Z) letter in star pattern
#include<stdio.h>
#include<stdlib.h>

int main(){
 int i,j,space,k=1;
 char a,ch;
  printf("FOR EXIT PESS \"0\" \n\n");
do{
  printf("Enter a capital letter(A-Z):\n");
  scanf("%c",&a);
  getchar();    
switch(a){
case 'A': for(i=1; i<=5; i++){
	  for(space=5; space>i; space--)
	     printf(" ");
	     for(j=1; j<=2*i-1; j++){
		if(j==1|| j==2*i-1|| i==4)
		printf("*");     
		else
		printf(" ");
	     }
	    printf("\n");   
	   }
          break;
case 'B': for(i=1; i<=5; i++){
	    for(j=1; j<=4; j++){
		if(j==1|| i==1 || i==5|| j==2*i-1|| i==4 && j==3|| i==3 && j<4 )
		printf("*");
		else
		printf("  ");
		}
	     printf("\n");
	  }
          break;
case 'C': for(i=1; i<=6; i++){
	     for(j=1; j<=5; j++){
	      if(j==1 && i>1 && i<6|| i==1 && j>1|| i==6 && j>1)
		printf("*");
	      else
	      printf(" ");
	      }
	     printf("\n");
	   }
         break;  
 
case 'D': for(i=1; i<=6; i++){
	     for(j=1; j<=5; j++){
	      if(j==1 || i==1 || i==6|| j==4 && j>1 && j<6)
		printf("*");
	      else
	      printf("  ");
	      }
	     printf("\n");
	   }
          break; 

case 'E': for(i=1; i<=7; i++){
	    for(j=1; j<=4; j++){
	      if(j==1 || i==1 || i==4|| i==7)
		printf("*");
	      else
	      printf(" ");
	      }
	     printf("\n");
	   }
           break;

case 'F': for(i=1; i<=7; i++){
	     for(j=1; j<=4; j++){
	      if(j==1 || i==1 || i==4)
		printf("*");
	      else
	      printf(" ");
	      }
	     printf("\n");
	   }
           break;
case 'G':for(i=1; i<=6; i++){
	     for(j=1; j<=7; j++){
	      if((j==1 && i>1 && i<6)||(i==1 && j>1 && j<6)|| (i==6 && j>1 && j<6)|| j==5 &&i>3||        	(i==4 && j>5)|| j==7 && i>4)
		printf("*");
	      else
	      printf(" ");
	      }
	     printf("\n");
	   }
           break;

case 'H':for(i=1; i<=5; i++){
	     for(j=1; j<=5; j++){
	      if(j==1 || j==5 || i==3)
		printf("*");
	      else
	      printf(" ");
	      }
	     printf("\n");
	   }
           break;

case 'I':for(i=1; i<=5; i++){
	     for(j=1; j<=5; j++){
	      if(i==1 || i==5 || j==3)
		printf("*");
	      else
	      printf(" ");
	      }
	     printf("\n");
	   }
           break;
 
case 'J': for(i=1; i<=5; i++){
	     for(j=1; j<=5; j++){
	      if(i==1  || j==3|| i==4 && j<2|| i==5 && j>1 && j<4)
		printf("*");
	      else
	      printf(" ");
	      }
	     printf("\n");
	      }
              break;
    
case 'K':for(i=1; i<=5; i++){
	     for(j=2; j<=5; j++){
	      if(j==2||i>2 && i==j|| j==(5-i+1))
		printf("*");
               else
                printf(" ");
               }
               printf("\n");
             }
             break;

case 'L': for(i=1; i<=5; i++){
	     for(j=1; j<=5; j++){
	      if(j==1|| i==5)
		printf("*");
	      else
                printf(" ");
	      }
	     printf("\n");	   	     
	     }
            break;

case 'M':   for(i=1; i<=5; i++){
	     for(j=1; j<=5; j++){
               if(j==1||i<4 && i==j||i<4 && j==(5-i+1)|| j==5)
                 printf("*");
               else
                printf(" ");
                }
                printf("\n");
                }
                break;           

case 'N':for(i=1; i<=5; i++){
	     for(j=1; j<=5; j++){
	      if(j==1|| i==j|| j==5 )
		printf("*");
	      else
	      printf(" ");
              }
              printf("\n");
             }
             break;
case 'O': for(i=1; i<=4; i++){
	     for(j=1; j<=4; j++){
	      if(((i==1||i==4)&&(j==2|| j==3)) || ((i==2||i==3)&&(j==1|| j==4)))
		printf("*");
	      else
	      printf(" ");
	      }
	     printf("\n");
	    }
            break;
case 'P':for(i=1; i<=5; i++){
	    for(j=1; j<=4; j++){
		if(j==1|| i==1 || j==2*i-1|| i==3 && j<4 )
		printf("*");
		else
		printf("  ");
		}
	     printf("\n");
	  }
          break;
case 'Q': for(i=1; i<=5; i++){
	     for(j=1; j<=5; j++){
	      if(((i==1||i==4)&&(j==2|| j==3)) || ((i==2||i==3)&&(j==1|| j==4)) ||(i==j && i>2 ))
		printf("*");
	      else
	      printf(" ");
	      }
	     printf("\n");
	    }
            break;
case 'R':for(i=1; i<=5; i++){
	    for(j=1; j<=4; j++){
		if(j==1|| i==1 || j==2*i-1|| i==4 && j==3|| i==3 && j<4|| i==5 && j==3 )
		printf("*");
		else
		printf("  ");
		}
	     printf("\n");
	      }
              break;
case 'S': for(i=1; i<=7; i++){
	   for(j=1; j<=4; j++){
	      if(j==1 && i<4 || i==1 || i==4|| i==7|| j==4 && i>4)
		printf("*");
	      else
	      printf(" ");
	      }
	     printf("\n");
	   }
           break;
case 'T': for(i=1; i<=5; i++){
	     for(j=1; j<=5; j++){
	      if(i==1|| j==3)
		printf("*");
	      else
	      printf(" ");
	      }
	     printf("\n");
	   }
           break;
case 'U':for(i=1; i<=5; i++){
	     for(j=1; j<=5; j++){
	      if(j==1 || j==5 || i==5)
		printf("*");
	      else
	      printf(" ");
	      }
	     printf("\n");
	   }
            break;   
case 'V':for(i=1; i<=5; i++){
	     for(j=1; j<2*5; j++){
		if(j==k|| j==2*5-k)
		printf("*");     
		else
		printf(" ");
	     }
	    printf("\n");   
            k++;
	   }
           break;
case 'W':for(i=1; i<=5; i++){
	     for(j=1; j<=5; j++){
               if(j==1||i>2 && i==j||i>2 && j==(5-i+1)|| j==5)
                 printf("*");
               else
                printf(" ");
                }
                printf("\n");
                }
                break;
case 'X':for(i=1; i<=5; i++){
	     for(j=1; j<=5; j++){
               if(i==j || j==(5-i+1))
                 printf("*");
               else
                printf(" ");
                }
                printf("\n");
                }
                break;
case 'Y':for(i=1; i<=5; i++){
	     for(j=1; j<=5; j++){
               if(i==j && i<4 || j==(5-i+1) && i<4|| j==3 && i>3)
                 printf("*");
               else
                printf(" ");
                }
                printf("\n");
                }
               break;

case 'Z':         for(i=1; i<=5; i++){
	     for(j=1; j<=5; j++){
               if(j==(5-i+1) || i==1|| i==5)
                 printf("*");
               else
                printf(" ");
                }
                printf("\n");
                }
                break;       
default: printf("invalid\n");
     break;   
}
  printf("do you wanna continue (y/n)\n");
  scanf("%c",&ch);
  getchar();

}while(ch=='y' || ch=='Y');   	  
return 0;
}
