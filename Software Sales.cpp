/*
	Calculate balance due based on software sales.
	A software company sells a package that retails for $99. Quantity discounts are as follows:
	Quantity  discounts	
	10-19:   	 20%, 
	20-49:    	 30% 
	50-99:    	 40% 
	100 or more: 50%.
	
	Write a program that asks for the number of units purchased and computes the total cost of the purchase.
	Include a flag.
*/

// this program calculates the number of units sald and displays play how much discount you get


/*
	Mohamed Sharif
	2/6/2018
	msharif@dmacc.edu
*/

# include <iostream>
# include <iomanip>
using namespace std;

const int valid1 = 1;

int main()
{
    int unitsSold; //Holds units sold
    double totalCost,
        discount,
        packagePrice = 99.00;

//Get the quantity purchased
    cout << "Enter the amount of units sold and I will tell you\n";
    cout << "the discounted Total Cost. \n";
    cin >> unitsSold;
    if(unitsSold<valid1){
        cout<<" Can not purchase less than 1 item."<<endl;
        cout<<" Enter a value greater than zero or program will terminate. "<<endl;
        cin >> unitsSold;
        if(unitsSold<valid1){
            cout<<"System exiting..."<<endl;
            exit(0);
        }

    }

//Determines the discount
    if 

        (unitsSold >= 10 && unitsSold < 20){
        discount = .20;
        cout << "Your discount is 20%\n";
        }
    else if

        (unitsSold >= 20 && unitsSold <50){
        discount = .30;
        cout << "Your discount is 30%\n";
        }
    else if 

        (unitsSold >= 50 && unitsSold < 100){
        discount = .40;
        cout << "Your discount is 40%\n";
        }
    else if

        (unitsSold >= 100){
        discount = .50;
        cout << "Your discount is 50%\n";
        }
    else {
            discount = 0;
            cout<< "There is no applicable discount!\n";

        }

//Calculates totalcost
    totalCost = (packagePrice * unitsSold);
    totalCost = totalCost - (totalCost*discount);

//Displays totalcost
    cout << "Your Total Cost is: $ "<<totalCost<<endl;



return 0;

}
