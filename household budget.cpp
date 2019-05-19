/* Write a program that create an array of struct for 4 months (4 element array) showing the following household budget items:

Rent (int), Gas (double), Water (double), Garbage (int), Donation (string) and Total (double which is Rent, Gas, Water and Garbage added together).

Then prompt a user to enter information for each of those 4 months. A user should enter five items with the sixth item (Total) being created for them on the basis of their input.

At the end of the fours months worth of data collection from the user, the program should output the overall total plus an average for each item (except Donation) for all four months.  For Donation, you can either list out all the donations given or just not put anything as part of the overall Total.   */
/* 
Mohame sharif
msharif@dmacc.edu
*/

// This progras takes household budget and calculates 4 months of budgets and gives you the average of it all and the totlal. 



#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

struct household
{
   
   int rent = 0;
   double gas = 0;
   double water = 0;
   int garbage = 0;
   string donation = "";
   double total = 0;
};

int main()
{
	//int i = 0;
	double average = 0;	
	int months = 4; 
	
   household budget [months];  // the household structure.


   
   
   /// Calculate the average of rent, gas,water, and garbage!!!
	double averageOfRent = 0;;
	double averageOfGas = 0;
	double averageOfWater = 0;
	double averageOfGarbage  = 0;
	double sumOfRent =0;
	double sumOfGas =0;
	double sumOfWater =0;
	double sumOfGarbage =0;
	double sum = 0;
   
	for (int i =0; i < months; i++)
	{
		
		
		cout << "Month " << i+1 << endl;
		
			cout << "     "<< endl;
		
   // Get the rent number. 
   cout << "Please enter the Rent amount: " << endl;
   cin >> budget[i].rent;

   // Get the gas number.
   cout << "Please enter the Gas amount: " << endl;
   cin	>> budget[i].gas; 
  
 
   // Get the hours worked by the employee.
   cout << "Please enter water amount: " << endl;
   cin >> budget[i].water;

   // Get the employee's hourly pay rate.
   cout << "Please enter the garbage amount: " << endl;
   cin >> budget[i].garbage;
   
    // Get the employee's hourly pay rate.
   cout << "Please enter the donation amount: " << endl;
   cin >> budget[i].donation;

			cout << "     "<< endl;
				
		cout << "Rent : $" << budget[i].rent << endl;
		cout << "Gas : $" << budget[i].gas << endl;
		cout << "Water : $" << budget[i].water << endl;
		cout << "Garbage : $" << budget[i].garbage << endl;
		cout << "Donation : $" << budget[i].donation << endl;

		budget[i].total = budget[i].rent + budget[i].gas + budget[i].water + budget[i].garbage;
		
		cout << "Total : $" << budget[i].total << endl;	
		
		cout << "         " << endl;
		
		// calculates Average and Total 
		
		sum += budget[i].total;
		
		sumOfRent += budget[i].rent;
 		sumOfGas +=  budget[i].gas;
   		sumOfWater += budget[i].water;
  		sumOfGarbage += budget[i].garbage;
		
		// Gets the average of each items in above

		
}
		average = sum/months;
		
		averageOfRent = sumOfRent / months;
		averageOfGas = sumOfGas / months;
		averageOfWater = sumOfWater / months;
		averageOfWater = sumOfWater / months;
		averageOfGarbage = sumOfGarbage / months;
		
	// The Average and Total 
	cout <<" Total of  "<< months <<"Months budget: "<< sum <<endl;	
	cout <<"The average is:  " << average <<endl;
	
	//  average for each item 
	cout <<"The average Rent is:  $" << averageOfRent <<endl;
	cout <<"The average Gas is:  $" << averageOfGas <<endl;
	cout <<"The average Water is:  $" << averageOfWater <<endl;
	cout <<"The average Garbage is:  $" << averageOfGarbage <<endl;
	
	
   // Calculate the employee's gross pay.
//   for (int i =0; i < months; i++)
//    {
//   		budget[i].total = budget[i].rent + budget[i].gas + budget[i].water + budget[i].garbage;
//   		
//	}
	
   // Display the employee data.
//   for (int i =0; i < months; i++)
//   {
//   
//   cout << "Here is the employee's payroll data:\n";
//   cout << "Rent: $" << budget[i].rent << endl;
//   cout << "Gas: $" << budget[i].gas << endl;
//   cout << "Water: $" << budget[i].water << endl;
//   cout << "Garbage: $" << budget[i].garbage << endl;
//   cout << "donation: $" << budget[i].donation << endl;
//   cout << fixed << showpoint << setprecision(2);
//   cout << "Total: $" << budget[i].total << endl;
//   }
   return 0;
}
