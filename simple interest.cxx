//program to compute simple interest by prompting the user
#include <stdio.h>
int main( ){
	float principal,rate,time, simpleinterest;
	printf("Enter the principal amount:");
	scanf("%f",&principal);
	
	printf("Enter the rate of interest :");
	scanf("%f",&rate);
	
	printf("Enter the time duration:");
	scanf ("%f",&time);
	
	simpleinterest=(principal*rate*time)/100;
	
	printf("Simple_ interest=%.2f", simpleinterest);
	
	return 0;
}