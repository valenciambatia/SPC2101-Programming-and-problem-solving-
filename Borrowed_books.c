/*
Name: Valencia Mbatia
Reg no:CT101/G/26466/25
Description:Program to store and record borrowed book titles for a local library
*/

//Pre processor directives
#include<stdio.h>
#include<stdlib.h>
 
 int main(){
 	char bookTitle[200];
 	FILE *fptr;//file pointer declaration
 	
  //Libary banner on console
 	printf("--------------------------------------\n");
 	printf("        Sunrise Public Library         \n");
 	printf("      Borrowed Books Logging System     \n");
 	printf("----------------------------------------\n");
  //Creating the file in append mode
fptr = fopen("C:\\Users\\Administrator\\Desktop\\C programs\\Borrowed_books.txt","a");

//checking successful opening
if (fptr == NULL){
	printf("Error!Could not create the file.\n");
	return 1;
}
//output on libarians screen
printf("File created successfully!\n");

// Get librarians input
printf("Enter book title: ");
fgets(bookTitle,200,stdin);

 
 //Writing book title to file
 fprintf(fptr,"The book title is: %s\n", bookTitle);
 
 fclose(fptr);//closing the file
 printf("\n The book title has been sucessfully stored on your desktop!\n");
 


 	 
 	 return 0;
 }