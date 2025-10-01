/*Name:Valencia Mbatia
  Reg no:CT101/G/26466/25
  Description:C program to calculate water bill
*/
//pre processor directive
#include<stdio.h>

//variable declaration
int main(){
char name[20];	
float units;
float waterbill;

//welcome message
printf("---Welcome to Dasani Water billing system.---\n");

//Input customers details
printf("Enter your name:");
scanf("%s",name);

printf("Enter number of units consumed:");
scanf("%f",& units);

//calculating the water bill
if(units<=30){
	waterbill=units*20;
}
else if(units<=60){
	waterbill=(30*20)+(units-30)*25;
}
else{
	waterbill=(30*20)+(30*25)+(units-60)*30;
}
//printing the bill
printf("---Water bill for %s---\n",name);
printf("Units consumed:%2f\n",units);
printf("Total water bill:KES %2f\n",waterbill);
printf("-------------------------------\n");
printf("Thankyou for choosing Dasani Water company!");
return 0;
}