/* 
	A bank charges $10 per month plus the following check fees for a commercial check-
	ing account: 
	
	$.10 each for fewer than 20 checks 
	$.08 each for 20–39 checks 
	$.06 each for 40–59 checks 
	$.04 each for 60 or more checks 
	
	The bank also charges an extra $15 if the balance of the account falls below $400 (before 
	any check fees are applied). Write a program that asks for the beginning balance and the 
	number of checks written. Compute and display the bank’s service fees for the month. 
	Input Validation: Do not accept a negative value for the number of checks written. If a 
	negative value is given for the beginning balance, display an urgent message indicating 
	the account is overdrawn. 
*/

/*
	Thsi programs calculates the amount of fee you get charged.
*/

/*
	Mohamed Sharif
	2/6/2018
	msharif@dmacc.edu
*/
 
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	
	float startBalance, 
		  servicefee, 
	      checkfees;
	
	float permonth = 10;
	int checksProcessed; 
	int fee = 15;
	
if ( startBalance < 400)+ fee;
	
	cout << "Enter start balance: " << endl;
	cin >> startBalance;
	
	cout << "Enter number of checks processed: " << endl;
	cin >> checksProcessed;
	

if ( checksProcessed < 20)
{
	checkfees = .10 * checksProcessed;
}
else if ( checksProcessed > 20)
{
	checkfees = .08 * checksProcessed;
}

	servicefee = ( permonth + checkfees);
	cout << "The service fee for the month is $ " << servicefee;
	
return 0;	
}
