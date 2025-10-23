/*Name:Valencia Mbatia
  Reg no:CT101/G/26466/25
  Description:Function to calculate fare based on distance travelled in kilometers
*/
//pre-processor directive
#include <stdio.h>

//Function prototype
float calculateFare(float distance);

//Main function
int main(){
	float distance,fare;
	
//Welcoming statement
printf("  Welcome to TranspoFare System .\n");
printf("_____________________________________________\n\n");

//prompt user input
printf("Enter distance travelled(in kilometers):");
scanf("%f",&distance);

//calling the function
fare=calculateFare(distance);

//Displaying the result
printf("\nDistance Travelled:%2.fkm\n",distance);
printf("Total Fare:Ksh.%2.f\n",fare);
printf("______________________________________________\n");
printf("Thankyou for using TranspFare System!\n");
printf("Have a safe journey ahead!\n");
printf("_________________________________________________\n");
	
}

//Function declaration
float calculateFare(float distance){
	float fareRate=50.0;//Ksh per kilometer
	float totalFare=distance*fareRate;
	return totalFare;
}