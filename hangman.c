// Online C compiler to run C program online
#include<stdio.h>
#include<string.h>


int main() {
      char s[100];
      printf("PLAYER 1 \n");
      printf("Enter a  6 letter word: ");
      gets(s);
      int l;
      l=strlen(s);
      printf("\n      GAME STARTED      \n");
      
      
      printf("PLAYER 2 \n");
      char a[100];
      
      printf("Guess an alphabet of that word, you have %d trials :", l);
      int i;
      for(i=0;i<l;i++){
      scanf(" %c",&a[i]);
      }
      
      
      int j;
      int wrong_guess = 0;
      for(i=0;i<l;i++){
      	
      	for(j=0;j<l;j++){
		  
	      
          if(a[i]!=s[j]){
          	wrong_guess++;
          	
	        switch(wrong_guess){
    

    case 1: 
    printf("\n-----------------------");
    printf("\n|           |   ");
    printf("\n|           0           ");
    printf("\n|             ");
    printf("\n|                  ");break;
            
          
      
    case 2:
    printf("\n-----------------------");
    printf("\n|           |   ");
    printf("\n|           0           ");
    printf("\n|           |   ");
    printf("\n|                  ");break;

     
      
       
    case 3:
    printf("\n-----------------------");
    printf("\n|           |   ");
    printf("\n|           0           ");
    printf("\n|          /|   ");
    printf("\n|                   ");break;

      
      
      
    case 4:   
    printf("\n-----------------------");
    printf("\n|           |   ");
    printf("\n|           0           ");
    printf("\n|          /|\\    ");
    printf("\n|             ");break;

       
      
       
    case 5:
    printf("\n-----------------------");
    printf("\n|           |   ");
    printf("\n|           0           ");
    printf("\n|          /|\\    ");
    printf("\n|          /        ");break;

       
      
       
    case 6:  
    printf("\n-----------------------");
    printf("\n|           |   ");
    printf("\n|           0           ");
    printf("\n|          /|\\    ");
    printf("\n|          / \\         ");break;

            
      
      }
      }
      }
      }  
      
    printf("\n-----------------------");
    printf("\n|           |   ");
    printf("\n|           0           ");
    printf("\n|          /|\\    ");
    printf("\n|          / \\         ");
}
