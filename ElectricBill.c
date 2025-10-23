/*Name:Valencia Mbatia
  Reg no:CT101/G/26466/25
  Description:Function to calculate electric bill based on units consumed
*/
//pre-processor directive
#include <stdio.h>

//Function prototype
float calculateElectricBill(int units);

//Main function
int main(){
	int units;
	float totalBill;
//Friendly welcoming message
printf("_______________________________________________\n");
printf("     Welcome to Wattwise Billing system   \n");
printf("_______________________________________________\n");

//Loop to get a valid input
while(1){
printf("Please enter number of units consumed:");
scanf("%d", &units);

//checking if input is valid(non-negative)
if(units<0){
	printf("Invalid input!Units cannot be negative.\n");
	printf("Please enter a valid number of units.\n");
}
else{
	break;//Exit loop if input is invalid
}
}

//function call
totalBill=calculateElectricBill( units);

//Displaying the bill
printf("___________________________________\n");
printf("BILL SUMMARY\n");
printf("___________________________________\n");
printf("Units consumed:%d units\n",units);
printf("Total ElectricBill:Ksh.%2.f\n\n",totalBill);
printf("Thankyou for using Wattwise Billing system!\n");
printf("Have a great day!");

}

//Function declaration
float calculateElectricBill(int units){
float bill=0; //initiliaze total bill to zero

//Apply billing rates
if(units<=100){
	bill=units*10;
}
else if(units<=200){
	bill=(100*10)+((units-100)*15);
}
else{
	bill=(100*10)+(100*15)+((units-200)*20);
}
return bill;
}