/*
	A car holds 15 gallons of gasoline and can travel 375 miles before refueling. Write a
	program that calculates the number of miles per gallon the car gets. Display the result
	on the screen.
	Hint: Use the following formula to calculate miles per gallon (MPG):
	 MPG  Miles Driven/Gallons of Gas Used 
*/

/*
	author: Mohamed Sharif
	Date: 1/22/2018
	emial: msharif@dmacc.edu
*/

#include <iostream>
#include <iomanip>	
using namespace std;

int main(){
		
	double gallon, milesDriven,  MPG;
	gallon = 15;
	milesDriven = 375;
	
	 MPG = ( milesDriven / gallon);
	
	cout <<fixed<<setprecision(2)<< "The car gets "  << MPG  << " gasoline her mile" <<endl;  
	
}
