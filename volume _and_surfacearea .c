/* Name:Valencia Mbatia
Reg no:CT101/G/26466/25
Date:24/09/25
Description:program to compute volume and surface area of a cylinder
*/
//pre processor directive
#include<stdio.h>
//main function
int main( ){
	//variable declarations and initialization
const float  pi=3.142;
float r,h,V,SA;
//prompt user input
printf("Enter the radius of the cylinder:");
scanf("%f",&r);

printf("Enter height of the cylinder:");
scanf("%f",&h);
//calculating volume and surface area of the cylinder
V=pi*r*r*h;
SA=2*pi*r*r +2*pi*r*h;
//Displaying the output
printf("\nThe volume of the cylinder =%f",V);
printf("\nThe surface area of cylinder=%f",SA);
  
return 0;
}
	
