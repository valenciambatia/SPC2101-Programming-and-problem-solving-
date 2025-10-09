/*Name:Valencia Mbatia
  Reg no:CT101/G/26466/25
  Description:A c program for a number guessing game
*/
//pre processor directives
#include <stdio.h> 
#include <stdlib.h>
#include <time.h>

//main function
int main(){ 
	int secretNumber,guess,attempts,playAgain;
	char choice;
	
	srand(time(0));//seed the random number generator
 //Game Title
 printf("===========================================\n");
 printf("    THE SECRET NUMBER HUNT CHALLENGE\n");
 printf("===========================================\n");
  
  while(playAgain){//Outer loop :controls multiple rounds
  	secretNumber = rand()%20 + 1;//Random number between 1 and 20
  	attempts = 0;
//introductory statements
  	printf("Welcome to the secret number hunt challenge.\n");
  	printf("\nI've picked a secret number between 1 and 20.\n");
  	printf("Try to guess the number in as few attempts as possible.\n");
  	
//Main guessing loop
   while(1){
	   printf("Enter your guess(1-20):");
	   scanf("%d",& guess);
	   attempts++;
	   
	   if(guess > secretNumber){
		   printf("\nToo high!Please try again.\n");
	   }
	   else if(guess < secretNumber){
	   	printf("\nToo low!Please try again.\n");
	   }
	   else{
	   	//correct guess
	   	if(attempts==1){
         printf("\nIncredible!You guessed it on the first try!\n");
		   }else{
   	     printf("\nCongratulations!You have guessed the correct number.\n");
   	     printf("Total attempts:%d\n",attempts);
		   }
   	     break;//Exit the guessing loop
	 
       }
}
//Ask if the user wants to play again
printf("\nWould you like to play another round?(y/n):");
scanf(" %c",& choice);
      if(choice =='y' || choice =='Y') {
      	playAgain = 1;
      	
printf("\n-----------------------------------\n");
     printf("Starting a new game......\n");
	  }
	  else{
	  	playAgain = 0;
printf("\nThank you for playing THE SECRET NUMBER HUNT CHALLENGE.\n");
	  }
 }
return 0;
}


     	
	   
		   