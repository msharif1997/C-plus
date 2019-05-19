/*
	The class uses inline 
	
	Mohamed sharif
	msharif@dmacc.edu
*/

#ifndef carHeader_H
#define carHeader_H
#include <string>

using namespace std;

class carAuction {
		private:
		string ID;
		int sold;
		int bluebook;
		int profit;
		
	public: 
	carAuction()
		{ ID = "House"; sold = 0; bluebook = 0; }
	void setID(string id)
		{ ID = id; } 
	void setSold(int s)
		{ sold = s; }
	void setBlueBook(int b)
		{ bluebook = b; }
	void setProfit(int p)
		{ profit = p;}
	string getID() const
		{ return ID; }
	int getSold() const
		{ return sold; }
	int getBlueBook() const
		{ return bluebook; }
	int getProfit() const
		{ return sold * bluebook; }
	
};

#endif /* CARHEADER_H */
