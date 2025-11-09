/*
Name: Valencia Mbatia
Reg no:CT101/G/26466/25
Description:Program to store and record borrowed book titles for a local library
*/

//Pre processor directives
#include<stdio.h>

 int main(){
 	FILE *fptr;//file pointer declaration
 	char bookTitle[50];
 	char date[20];
 	char choice;
 	int ch;
 	
  //Libary banner on console
 	printf("--------------------------------------\n");
 	printf("        Masomo Local Library         \n");
 	printf("      Borrowed Books Logging System     \n");
 	printf("----------------------------------------\n");
  //Creating the file in append mode
fptr = fopen("C:\\Users\\Administrator\\Desktop\\C programs\\Borrowed_books.txt","a");

//checking successful opening
if (fptr == NULL){
	printf("Error!Could not create the file.\n");
	return 1;//Exit program with error status
}

// Get librarians input
do {
printf("Enter the book title: ");
fgets(bookTitle,100,stdin);

printf("Enter the date (DD/MM/YYYY): ");
fgets(date,20,stdin);

 //Writing book title nand date of purchase to file
 fprintf(fptr,"------------------------------------------\n");
 fprintf(fptr,"Title: %s\n", bookTitle);
 fprintf(fptr,"Date: %s\n", date);
 fprintf(fptr,"--------------------------------------------\n");
 
 printf("Do you want to add another book? (y/n):");
 scanf("%c",&choice);
 getchar();// Clear newline left by scanf
}
while(choice == 'y' || choice == 'Y');
 
 fclose(fptr);//closing the file

 printf("\n All book entries saved successfully!\n");
 printf("Here is the current list of books:\n\n");
 
 //Open file in read mode to display all books
 fptr = fopen("C:\\Users\\Administrator\\Desktop\\C programs\\Borrowed_books.txt","r");
 //checking error
 if(fptr == NULL){
	 printf("Error!Could not open file for reading.\n");
	 return 1;//Exit program with error status
 }
 //Read the file character by character unti EOF
 while((ch = fgetc(fptr)) != EOF){
 	putchar (ch);//print each character
 } 
 fclose(fptr);//close file

 	 return 0;
 }