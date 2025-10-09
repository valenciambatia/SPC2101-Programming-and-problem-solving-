/*Name:Valencia Mbatia
  Reg no:CT101/G/26466/25
  Description:Program for a bank ATM WIthdrawal
*/
//pre proccessor directive
#include<stdio.h>

//variable declaration
int main(){
	double balance;
	double withdraw;
	
//introductory statement
printf("Welcome to CashPoint ATM!\n");
printf("---------------------------\n");	

//Asking user to initialize balance
printf("Enter your account balance:");
scanf("%lf",& balance);

//while loop program
while( balance>0){
    printf("\nYour current balance is:%2lf\n",balance);
    printf("Enter amount to withdraw:");
    scanf("%lf",& withdraw);

if(withdraw>balance){
	printf("Insufficient funds!please try again.\n");
	continue;	
}
printf("Withdrawal of %2lf successful!\n",withdraw);

balance=balance-withdraw;
printf("Remaining balance is:%2lf\n",balance);
}
printf("\n Balance is zero.No more further withdrawals allowed.\n");
//closing statement
printf("Thankyou for using Cashpoint ATM!!\n");
	return 0;
}