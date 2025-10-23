/* Name:Valencia Mbatia
   Reg no:CT101/G/26466/25
   Description:Function to convert temperature in Fahrenheit to celcius
*/
//pre-processor directive
#include<stdio.h>

//Function prototype
float convertToCelcius(float fahrenheit);

//Main function
int main(){
	float fahrenheit,celcius;
//Welcoming statement
printf("  WELCOME TO THE TEMPERATURE CONVERTER \n")	;
printf("___________________________________________\n");

//Prompting user for input
printf("Enter temperature in Fahrenheit:");
scanf("%f", &fahrenheit);

//call function to convert into celcius
celcius=convertToCelcius(fahrenheit);

//Displaying the output
printf("--------------------------------------------\n");
printf("Temperature in Fahrenheit:%.2f%cF\n",fahrenheit,248);
printf("Converted tempertature in celcius:%2.f%cC\n",celcius,248);
printf("----------------------------------------------\n");
printf("Conversion complete!Stay as cool or warm as needed.\n");
printf("----------------------------------------------------\n");
return 0;
}

//Function declaration
float convertToCelcius(float fahrenheit){
	float celcius = (fahrenheit-32)*5/9;
	return celcius;
}