/*Name:Valencia Mbatia
  Reg no:CT101/G/26466/25
  Description:C program to purchase mobile data bundles
*/
//pre proceesor directive
#include <stdio.h>
int main(){
int choice;

//Welcoming statement

printf("============================================\n");
printf("Welcome to DataPoa Communication.\n");
printf("Your trusted local internet service provider.\n");
printf("=============================================\n");

//Displaying the menu
printf("Select your preffered data bundle.\n");
printf("1.100MB @ KES 50.\n" );
printf("2.500MB @KES 200.\n");
printf("3.1GB @KES 350.\n");
printf("4.2GB @KES 600.\n");
printf("-----------------------------------\n");
//prompt user input
printf("Enter your choice(1-4).\n");
scanf("%d",&choice);

//switch statement to handle users choice
switch(choice){
	case 1:
        printf("You have selected 100MB data bundle.\n Cost = KES 50.\n");
    break;
	case 2:
		printf("You have selected 500MB data bundle.\n Cost=KES 200.\n");
		break;
	case 3:
		printf ("You have selected 1GB data bundle.\n Cost= KES 350.\n");
		break;
	case 4:
		printf("You have selected 2GB data bundle.\n Cost=KES 600.\n");
		break;
	default:
		printf("Invalid choice!Please select from 1-4.\n");
}

//closing statement
printf("Thankyou for choosing DataPoa Communication!\n");
printf("We look forward to serving you again.\n Goodbye.");

return 0;
}	
		
