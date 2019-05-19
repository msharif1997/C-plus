/*
	The class uses inline 
	
	Mohamed sharif
	msharif@dmacc.edu
*/

#ifndef budgetHeader_H
#define budgetHeader_H
#include <string>
using namespace std;

class utilityItems{
	
	public:
		utilityItems()
		{ rent = 1200; water = 68; garbage = 25;}
		
		void setRent(int r)
			{ rent = r; }
		void setWater(double w)
			{ water = w; }
		void setGarbage(int g)
			{ garbage = g; }
		void setTotal(double t)
			{ total = t; }
			
		int getRent ()
		{ return rent; }
		
		double getWater()
		{ return water; }
		
		int getGarbage()
		{ return rent; }
		
		double getTotal()
		{ return rent + water + garbage; }
				 
	private:
		int rent;
		double water;
		int garbage;
		int total;	
};



#endif /// budgetHeader_H ///
