/*
	For the car auction house class from last week, make the Auction class into a fully inline class (so all methods/functions are to be within the class) - one file

For the budget class from last week, separate out the class from the main program so two separate files - (main file and .h file); can also do three files including an implementation file but that does not work with Dev-C (see dice folder from the example files)

You can use my solution (but cite me) or your own solution to the above two problems.

This program uses an header file that contains the class. the program compiles and runs 

*/

/* 
Mohame sharif
msharif@dmacc.edu
*/





#include <iostream>
#include <string>
#include <iomanip>
#include "budgetHeader.h">
using namespace std;


int main()
{
	//int i = 0;
//	double average = 0;	
	int months = 3; 
	
	int payRent = 0;
	double payWater = 0;
	int payGarbage = 0;
	double total = 0;
	
  // household budget [months];  // the household structure.
   utilityItems Items [months];
   utilityItems();
      
   
	for (int i =0; i < months; i++)
	{
		
		
		
		cout << "Month " << i+1 << endl;
		
		
		cout<< "The Rent is: $" << utilityItems().getRent() << endl;
		cout<< "The Water bill is: $" << utilityItems().getWater()<< endl;
		cout<< "The garbage amount is: $" << utilityItems().getGarbage()<< endl;
   
		
		
			cout << "     "<< endl;
		
   // Get the rent amount. 
    cout << "Please enter the Rent amount: $" << endl;
	cin >> payRent; 

   // Get the water amount
   cout << "Please enter water amount: $" << endl;
   cin >> payWater;
  

   // Get the garbage amount
   cout << "Please enter the garbage amount: $" << endl;
   cin >> payGarbage;
   
   
	Items[i].setRent(payRent);
	Items[i].setWater(payWater);
	Items[i].setGarbage(payGarbage);
	
			cout << "     "<< endl;
				


	cout<< "The total is: $5" <<	Items[i].getTotal() << endl;			
	

		
		cout << "         " << endl;
		


		
}

   return 0;
}
