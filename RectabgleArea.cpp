/*
	If  you  have  downloaded  this  book’s  source  code  from  the  companion  Web  site,  you  
will  find  a  partially  written  program  named    
AreaRectangle.cpp
  in  the    Chapter    
 06    
folder. (The companion Web site is at  
www.pearsonhighered.com/gaddis 
.) Your job is 
to complete the program. When it is complete, the program will ask the user to enter 
the width and length of a rectangle and then display the rectangle’s area. The program 
calls the following functions, which have not been written: 
•      
getLength
  –  This  function  should  ask  the  user  to  enter  the  rectangle’s  length  and  
then return that value as a  
double
.  
•      
getWidth
 – This function should ask the user to enter the rectangle’s width and then 
return that value as a  
double
 .  
•      
getArea
  –  This  function  should  accept  the  rectangle’s  length  and  width  as  argu-
ments  and  return  the  rectangle’s  area.  The  area  is  calculated  by  multiplying  the  
length by the width. 
•      
displayData
 – This function should accept the rectangle’s length, width, and area 
as arguments and display them in an appropriate message on the screen. 
*/

/*
	Mohamed Sharif
	Msharif@dmacc.edu
*/

/// This program gets the area of the Rectangle !!!! 

#include <iostream>
using namespace std;
  
  
   double length=0.0,    
   		  width=0.0,     
          area=0.0;  
          
          void displayData (double area)
{
	cout << "The length of the rectangle is " << length << endl;
	cout << "The width of the rectangle is " << width << endl;
	cout << "The area of the rectangle is " << area << endl;
}

void getArea (double, double);

void getInput ();





int main()
{
getInput();
  
          

          
   return 0;
}

void getArea (double length, double width)
{

	area= length * width;
	displayData(area);
}

void getInput ()
{
	cout << "Please enter the length and the width of the rectangle. " << endl;
	cout << "length: \n";
	cin >> length;
	cin.clear();
	cout << "Width: \n";
	cin >> width;
	cin.clear();
	
	getArea (length, width);	
}



