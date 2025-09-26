/*Name:Valencia Mbatia
Reg no:CT101/G/26466/25
Date:15 sep
Description:Prompting a user to enter their information
*/
//pre processor directive
#include<stdio.h>
//variable declaration 
int main( ){
int height;
int phonenumber;
int bankbalance;
//introduction statement 
printf("Hey, My name is Valencia Mbatia a student in KyU pursuing Bsc Computer Science and im going to take you through the following steps \n");
//prompting user to input height
printf("Please enter your height:");
scanf("%d",& height);
printf("Your are %dft tall.\n",height);
//prompting user to input phonenumber
printf(" Please enter your phonenumber:");
scanf("%d",& phonenumber);
printf("Your phonenumber is %d.\n",phonenumber);
//prompting user to input bankbalance
printf("Please enter your bank balance:");
scanf( "%d",& bankbalance);
printf("Your bank balance is Ksh%d.\n",bankbalance);
//closing statement 
printf("Thankyou for your time");

return 0;
}
