/*
	For the car auction house class from last week, make the Auction class into a fully inline class (so all methods/functions are to be within the class) - one file

For the budget class from last week, separate out the class from the main program so two separate files - (main file and .h file); can also do three files including an implementation file but that does not work with Dev-C (see dice folder from the example files)

You can use my solution (but cite me) or your own solution to the above two problems.

This program uses an header file that contains the class. the program compiles and runs 
The class uses inline 
*/

/* 
Mohame sharif
msharif@dmacc.edu
*/

#include <iostream>
#include "carHeader.h"		/// The car Auction class header
using namespace std;


int main() {
	
	carAuction Auction, Auction2;
	
	
	string carId = "";
	int carSold = 0;
	int carBluebook = 0;
		
	cout<< "Car ID " << Auction.getID() << endl;
	cout<< "Car sold " << Auction.getSold() << endl;
	cout<< "Car Bluebook " << Auction.getBlueBook() << endl;
	
	cout <<"---------------------------------------" << endl;
	
	cout << "Please enter the car ID " <<endl;
	cin >> carId;
	cout << "Please enter the sold amout of the car" <<endl;
	cin >> carSold;
	cout << "Please enter the car bluebook" <<endl;
	cin >> carBluebook;
	
	Auction.setID(carId);
	Auction.setSold(carSold);
	Auction.setBlueBook(carBluebook);
	
	cout <<"---------------------------------------" << endl;
	
	cout << "Here is the result of the Car Auction program" << endl;
	cout << "The ID of the Auction Car: " << Auction.getID() <<endl;
	cout << "The sold amout of the Auction car is: " << Auction.getSold() << endl;
	cout << "The bluebook of the Auction car: " << Auction.getBlueBook() <<endl;
	cout << "The profit is: $" << Auction.getProfit() << endl;
	
	/*****************************************************************************/
   /*							Auction2										*/
  /*****************************************************************************/
	
	cout << "Please enter the car ID " <<endl;
	cin >> carId;
	cout << "Please enter the sold amout of the car" <<endl;
	cin >> carSold;
	cout << "Please enter the car bluebook" <<endl;
	cin >> carBluebook;
	
	Auction2.setID(carId);
	Auction2.setSold(carSold);
	Auction2.setBlueBook(carBluebook);
	
	cout <<"---------------------------------------" << endl;
	
	cout << "Here is the result of the Car Auction2 program" << endl;
	cout << "The ID of the Auction Car: " << Auction2.getID() <<endl;
	cout << "The sold amout of the Auction car is: " << Auction2.getSold() << endl;
	cout << "The bluebook of the Auction car: " << Auction2.getBlueBook() <<endl;
	cout << "The profit is: $" << Auction2.getProfit() << endl;
	
		
	return 0;
}
