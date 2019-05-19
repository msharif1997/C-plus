#include <iostream>
#include <iomanip>
using namespace std;

/*
The East Coast sales division of a company generates 58 percent of total sales. Based
on that percentage, write a program that will predict how much the East Coast division
will generate if the company has $8.6 million in sales this year. 

*/

/*
	author: Mohamed Sharif
	Date: 1/22/2018
	emial: msharif@dmacc.edu
*/

/*
	When floatfield is set to fixed, floating-point values are written using fixed-point notation:
	the value is represented with exactly as many digits in the decimal part as specified by the 
	precision field (precision) and with no exponent part.
	
	according to http://www.cplusplus.com/reference/ios/fixed/
*/

int main(){
	
	double sales, totalSales, prediction;
	
	sales = 8600000.0;
	totalSales = .58 ;
	
	prediction = (totalSales * sales);
	
	cout <<fixed<<setprecision(2)<< "The East Coast sales division of the company will generates " << prediction <<endl;  
	
	return 0;
}
