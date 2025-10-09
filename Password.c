/*Name:Valencia Mbatia
  Reg no:CT101/G/26466/25
  Description:Program for a password system
*/
//pre processor directive
#include <stdio.h>

//variable declarations
int main(){
	int password;
	int correctPassword=1234;
	 
 //Title
 printf("    USER VERIFICATION INTERFACE.\n");
 printf("_____________________________________________\n");
 //The do-while loop
 do{ 
 	//Asking user to input their password
	 printf("\n Please enter your 4-digit password:");
	 scanf("%d", & password);
	 //Checking if password is valid
 if( password< 1000 || password>9999 ){
	 printf("Invalid input!Please enter a 4-digit number.\n");
  }
  //Checking if password is correct
 else if(password!=correctPassword){
	 printf("Incorrect password!Please try again.\n");
 } 
 }
 while(password!=correctPassword);//loop continues while password is wrong
 	
 	//this part runs only when password is correct
 printf("\nAccess Granted!Welcome to the system.");
 
	return 0;
}
