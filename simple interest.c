/*
Name:Valencia Mbatia 	
Reg no:CT101/G/26466/25
Description:program to calculate simple interest
*/
//pre processor directive
#include <stdio.h>
//variable declaration
int main( ){
	float principal,rate,time, simpleinterest;
	//prompt user to input principal
	printf("Enter the principal amount:");
	scanf("%f",&principal);
	//prompt user to input rate
	printf("Enter the rate of interest :");
	scanf("%f",&rate);
	//prompt user to enter time
	printf("Enter the time duration:");
	scanf ("%f",&time);
	//calculating simple interest
	simpleinterest=(principal*rate*time)/100;
	//Displaying the result
	printf("Simple_ interest=%.2f", simpleinterest);
	
	return 0;
}
