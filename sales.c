/*
Name:Valencia Mbatia
Reg no:CT101/G/26466/25
Description:A Program to store a shops daily sales transactions in a file 
            and display total sales of the day
*/

//pre-processor directive
#include <stdio.h>
#include <string.h>

int main(){
	FILE *fptr;//file pointer declaration
	char date[20];
	double amount;
	double total_sales= 0;
	char choice;
	char line[100];
	int c;
	
	//Open file for writing
   fptr	= fopen("C:\\Users\\Administrator\\Desktop\\C programs\\sales.txt", "a");
   
	//check for error while opening
	if(fptr == NULL) {
		printf("Error!Could not open file.\n");
		return 1;//exit program with error status
	}
	
	//Shop Banner on Console
	printf("--------------------------------------------\n");
	printf("          Furaha Retail Shop             \n");
	printf("        Sales Transactions Record         \n");
	printf("--------------------------------------------\n");
	 
	 //Prompt seller to enter date
	printf("Enter date of sales entry record(DD/MM/YYYY):\n");
	fgets(date,20,stdin);
	date[strcspn(date, "\n")] = 0; //remove newline
  
    //writing the date to the file  as a comment line
    fprintf(fptr, " #Date: %s\n",date );
	  
	   // loop to get sales input from seller and write to file
  do{
   printf("Enter transaction amount: ");
   scanf("%lf", &amount);
   
   //Writing transactions to file
   fprintf( fptr,"%.2lf\n", amount);
   
   //clear input buffer
  while ((c = getchar ()) != '\n' &&  c != EOF);
  
  
printf("Do you want to enter another transaction? (y/n): ");
choice = getchar();
while ((c = getchar() )!= '\n' && c != EOF); //clear new line after choice
	
  }
  
  while(choice == 'Y' || choice == 'y');
  
  //close the file 
fclose(fptr);

printf("\nTransactions saved  succcessfully!\n");

//reopen file for reading
fptr = fopen("C:\\Users\\Administrator\\Desktop\\C programs\\sales.txt","r") ;
if(fptr == NULL) {
	printf("Error!Could not read from file.\n");
	return 1;
} 

   //Reading transaction amounts and calculating total sales
   while(fgets(line,sizeof (line) ,fptr) != NULL){
	   //Skip lines starting with '#' or containing Total Sales
	   if(line[0] == '#' || strstr(line, "Total sales") != NULL)
	   	continue;
	   
   //Read numeric amounts only
   if (sscanf(line, "%lf" ,&amount) == 1){
	   total_sales += amount;
   }
   
}
   fclose(fptr);
   
   //Displaying total sales of the day
  printf("\n Total sales: Ksh %.2lf\n",total_sales);
  
   //reopen file in append mode to add total at the end
   fptr = fopen("C:\\Users\\Administrator\\Desktop\\C programs\\sales.txt", "a");
   fprintf(fptr, "Total sales: Ksh %.2lf\n", total_sales);
  
  //close file
  fclose(fptr);
   printf(" Total sales recorded successfully in file!\n");
  
  return 0;
}
   
         
