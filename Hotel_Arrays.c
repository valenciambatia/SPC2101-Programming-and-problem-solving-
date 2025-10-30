/*Name:Valencia Mbatia
  Reg no:CT101/G/26466
  Description:Hotel Management System using arrays
*/

//pre-processsor directive
#include<stdio.h>
//main function
int main(){
	//======ROYAL CREST HOTEL MANAGEMENT SYSTEM=======
	//-----------------------------------------------
	//Weekly Revenue Tracker(1D Array)
	//------------------------------------------------
	
	//Variable declaration and array initialisation
	int revenue[7];//store revenue for 7 days
	int totalRevenue=0;
	float averageRevenue;
	int i=0;

	//introductory statement
	printf("=====ROYAL CREST HOTEL MANAGEMENT SYSTEM=====\n\n");
	printf("-------Weekly Revenue Tracker--------------\n");
	
	//for loop to create weekly revenue
	for(i=0; i<7; i++){
		printf("Enter revenue for the Day %d: ",i +1);
		scanf("%d", &revenue[i]);
		totalRevenue += revenue[i];
	}
	//calculating averageRevenue
	averageRevenue = totalRevenue/7.0;
	
	//Displaying output
	printf("\nTotal Weekly Revenue: %d\n",totalRevenue);
	printf("Average Daily Revenue: %.2f\n\n",averageRevenue);
	
	//----------------------------------------------------
	//Room occupancy(One Branch - 2D Array
	//--------------------------------------------------------
	
	//Variable declaration and initialisation
	int occupancy[5][10];//5 floors, 10 rooms each
	int occupied, vaccant;
	 printf("----Room Occupancy: Main Branch---\n");
	printf("-----Enter room status(1 =Occupied, 0 =Vaccant\n\n");
	
	//for loop to create room occupancy
	for(int floor=0; floor<5 ;floor++){
		printf("Floor %d:\n", floor + 1);
		
    for(int room=0; room<10; room++){
		printf("Room %d:" ,room+ 1);
		scanf("%d" , &occupancy[floor][room]);
		
		//Validate for only 0 or 1
    while(occupancy[floor][room] !=0 && occupancy[floor][room] !=1){
    	printf("Invalid! Enter 0 or 1: ");
    	scanf("%d",occupacy[floor][room]);
	     }	
	 }
	printf("\n");
}
	printf("-----Floor Occupancy Report-------\n");
	
    for(int floor = 0; floor<5; floor++){
		occupied =0;
		vaccant =0;
    for(int room =0; room<10; room++){
		if(occupancy[floor][room] ==1)
			occupied++;
		else 
			vaccant++;
	}
	printf("Floor %d => Occupied: %d| Vaccant: %d\n",
	       floor + 1, occupied, vaccant);
	}
	printf("\n");
	
	//-------------------------------------------------------------
	//Multiple Branch Occupancy(3D Array)
	//------------------------------------------------------------------
	
	//Variable declaration
	int chain[3][5][10];   //3 branches,5 floors,10 rooms per floor
	int occupied =0;
	
	printf("---------Multiple Branches Occupancy--------------");
	printf("Enter occupancy across 3 branches(1=occupied, 0= vaccant\n\n");
	
	//for loop to create multiple branch occupancy
	for(int branch =0; branch<3; branch++){
		printf("\nBranch %d:\n", branch +1);

	for(int floor=0; floor<5; floor++){
		for(int room =0; room<10; room++){
			printf(" Floor %d Room %d: ",floor +1,room +1);
			scanf("%d", &chain[branch][floor][room]);
			
			//validate input
		 while (chain[branch][floor][room] != 0 &&
		         chain[branch][floor][room] != 1){
		         	printf("Invalid! Enter 0 or 1: ");
		         	scanf("%d", &chain[branch][floor][room]);
		         	
				 }
    if(chain[branch][floor][room] ==1)
    	totalOccupied++;
	    }
   	  }	
	}
	printf("\nTotal Occupied Rooms in All Branches: %d\n", totalOccupied);
		
	return 0;
}
 