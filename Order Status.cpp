/*
		The Middletown Wholesale Copper Wire Company sells spools of copper wiring for 
	$100 each. Write a program that displays the status of an order. The program should 
	have a function that asks for the following data: 
	•      
	The number of spools ordered. 
	•      
	The number of spools in stock. 
	•      
	Whether there are special shipping and handling charges. 
	(Shipping  and  handling  is  normally  $10  per  spool.)  If  there  are  special  charges,  the  
	program should ask for the special charges per spool. 
	Programming Challenges 
	371
	The gathered data should be passed as arguments to another function that displays 
	•      
	The number of spools ready to ship from current stock. 
	•      
	The number of spools on backorder (if the number ordered is greater than what is 
	in stock). 
	•      
	Subtotal  of  the  portion  ready  to  ship  (the  number  of  spools  ready  to  ship  times  
	$100).  
	•      
	Total shipping and handling charges on the portion ready to ship. 
	•      
	Total of the order ready to ship. 
	The shipping and handling parameter in the second function should have the default 
	argument 10.00. 
	Input Validation: Do not accept numbers less than 1 for spools ordered. Do not accept 
	a number less than 0 for spools in stock or shipping and handling charges.
*/

//

/*
	This program calculates how much copper you bought and if their was special order was included to it or not!!!!

	Mohamed Sharif
	msharif@dmacc.edu
*/

#include <iostream>
using namespace std;

void inventory(double,double,double=10.00);

int main(){
	
	
	
	double spoolsOrdered = 0;
	double Stocks = 0;
	char flag;
	double Shipping = 0;

	
	cout << "How many Spools you wnat to Order? " << endl;
	cin >> spoolsOrdered;
	
	while(spoolsOrdered < 1)
	{
		cout << "Enter a number greater than 0: " << endl;
		cin >> spoolsOrdered;
	}
		
		
//	cout << spoolsStock << " Spools in Stock: "<< endl;
	
	cout << " Enter the amount of Spools in Stock: "<< endl;
	cin >> Stocks;
	
	while(Stocks < 0 ){
		cout << " Enter a number greater than 0: "<< endl;
		cin >> Stocks;
		
	}
		
		
	cout << "Is their special shipping and handling ? " << endl;
	cin >> flag;		 
	
	if( flag == 'Y' || flag == 'y'  ){
	
		cout << "Please enter in the amount of the special charges: " <<endl;
		cin >> Shipping;
		
	//	inventory (spoolsOrdered,Stocks,Shipping);
			
		while (Shipping < 0 ){
			
		cout << " Enter a number greater than 0: "<< endl;
		cin >> Shipping;
		}
	//	cout<<" special shiping greater than zero "<<Shipping<<endl; 
			inventory (spoolsOrdered,Stocks,Shipping);
	}
	
	else {
		inventory (spoolsOrdered,Stocks);
	}
	
		
	return 0;
}

void inventory (double spoolsOrdered, double stocks, double specialShipping){
	
  /*double total;
	double inventoryOrder;
	double order;
	double shipping;
	double subtotal;*/
	
	double total, backOrder = 0, readytoShip=0,shippinghandling=0, subtotal=0;
	
	
	if (stocks < spoolsOrdered ){
		
		backOrder = spoolsOrdered - stocks;
	}
	cout << "The amount of spools on back order is: " << backOrder << endl;
		
	backOrder = spoolsOrdered - backOrder;
	cout << "Spools ready to be shipped: " << backOrder << endl;
	
	subtotal = spoolsOrdered * 100;	
	cout << "Your subtotal before shipping and handling fees are: " << subtotal << endl;
	
	shippinghandling = spoolsOrdered * specialShipping;
	cout << "Your shipping cost of the spools of copper is $" << shippinghandling << endl;
	
	total = shippinghandling + subtotal;
	cout << "Your total cost of the order is: $" << total << endl;
	
}


