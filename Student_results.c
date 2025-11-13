/*
Name:Valencia Mbatia.
Reg No:CT101/G/26466/25.
Description: C program to a student examination results in a binary file.
*/

//Pre-processor directive
#include <stdio.h>
#include <stdlib.h>

//creating struct
struct Student{
	char name[50];
	char regNo[20];
	float totalMarks;
	
};
  
int main(){
	FILE *fptr;
	struct Student s;
	int n, i;
	
	//create and write to binary file
	fptr = fopen("C:\\Users\\Administrator\\Desktop\\C programs\\C programs\\results.dat", "wb");
	//checking foe error
	 
	 if (fptr == NULL){
	 	printf("Error!Could not create the file.\n");
		 return 1;
	 }
	  
	  printf("Enter number of students: ");
	  scanf("%d", &n);
	  getchar(); //clear the newline character
	  
	  //Loop to obtain input
	  for (i = 0; i < n; i++){
		  printf("\n Enter details for student %d\n", i + 1);
		  
		   printf("Name: ");
		   fgets(s.name, sizeof(s.name), stdin);
		   
		   printf("Registration Number: ");
		   fgets(s.regNo, sizeof(s.regNo), stdin);

		   printf("Total Marks: ");
		   scanf("%f", &s.totalMarks);
		   getchar(); //clear newline
		   
		    fwrite(&s, sizeof(struct Student), 1, fptr);

	  }
	  
	   fclose(fptr);//closing file

	   printf("\n Data successfully written to file!\n\n");
    
       //Reading and displaying the binary file data contents
        fptr = fopen("C:\\Users\\Administrator\\Desktop\\C programs\\C programs\\results.dat", "rb");
        
        if (fptr == NULL){
			printf("Error opening file for reading!\n");
			return 1;
		}
	 printf(" STUDENT RESULTS FROM THE FILE:\n ");
	 printf(" ----------------------------------------\n ");
	 
	 while (fread(&s, sizeof(struct Student), 1, fptr) == 1){
		 printf("Name: %s", s.name);
		 printf("Registration Number: %s", s.regNo);
		 printf("Total Marks: %.2f\n", s.totalMarks);
		 printf("-----------------------------------------------\n ");
		 
	 }
	
	fclose(fptr);
	
	return 0;
}