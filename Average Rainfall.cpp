/*
	Write a program that uses nested loops to collect data and calculate the average rainfall 
	over a period of years. The program should first ask for the number of years. The outer 
	loop will iterate once for each year. The inner loop will iterate twelve times, once for 
	each month. Each iteration of the inner loop will ask the user for the inches of rainfall 
	for that month. 
	After all iterations, the program should display the number of months, the total inches 
	of rainfall, and the average rainfall per month for the entire period. 
	Input Validation: Do not accept a number less than 1 for the number of years. Do not 
	accept negative numbers for the monthly rainfall.

*/

// This program lets the user enter a year and gives the totalrainfall and avarge rainfall the user inputted!!!!

/*
	Mohamed Sharif
	2/13/2018
	msharif@dmacc.edu
*/

#include <iostream>
#include <iomanip>
using namespace std;


int main()
{
	int year = 0;
	const int months = 12;   
   	float rainFall = 0.0f;
   	float avgRainfall = 0.0f; 
   	float totalRainfall = 0.0f;

   
	cout << "Please Enter the number of  years: " << endl;
	cin >> year;
	
	while (year < 1){
		
		 cout << "Please Enter the number of  years: " << endl;
   		cin >> year;
	}
	
	for (int i = 1; i <= year; i++){
		
		for( int month = 1; month <= months; month++ ){
			
			 cout << "Please Enter the rainfall " <<month << "months" << endl;
			  cin >> rainFall ;
			  
			  while (rainFall < 0){
			  	
			  	cout << "Please Enter the number of  years: " << endl;
   				cin >> rainFall;
			  }
			  
			  totalRainfall += rainFall;
		}
	}
	
	
   cout << "Number of Months: "  << year * months << endl;
   
   cout << "The Total Rainfall: " << setprecision(2) << fixed << totalRainfall << endl;
   
    cout << "The Average Rainfall: " << setprecision(2) << fixed << totalRainfall / (year * months)  << " inches" << endl;
	
   return 0;
}
