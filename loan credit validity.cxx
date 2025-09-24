/*Name:Valencia Mbatia
Reg no:CT101/G/26466/25
Desription:Program for loan credit validity
*/
//pre processor directive
#include<stdio.h>
//variable declaration
int main( ){
int age;
double annual_income;
//prompting user input
printf("Dear applicant,welcome to Faraja Bank.\n");
printf("To apply for a loan,please proceed to the step below ");
printf("Please enter your age:");
scanf("%d",&age);
printf("Please enter your annual income in Ksh:");
scanf("%lf",&annual_income);
//conditions for the loan approval
if(age>=21&& annual_income>=21000){
printf("Congratulations you qualify for a loan.\n");
}else {
printf("Unfortunately we are unable to offer you a loan at this time.\n");
}
printf("Thankyou for banking with Faraja.\nYour trusted financial option. ");

return 0;
}	       
	       