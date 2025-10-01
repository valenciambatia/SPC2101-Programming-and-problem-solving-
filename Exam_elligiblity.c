/*Name:Valencia Mbatia
Reg no:CT101/G/26466/25
Description:C program to check student exam elligibilty
*/
//pre processer directive
#include <stdio.h>
//variable declaration
int main(){
float attendance,average;

//prompt user input
printf("Enter student's attendance in percentage:")	;
scanf("%f",& attendance);

printf("Enter student's average marks:");
scanf("%f",& average);
//check elligibility
if(attendance>=75 && average>=40){
printf("Student is elligible for final exams.\n");

}else{
	printf("Student is not elligible for final exams.\n");
}	
//Display the output

	return 0;  
}







