
/*
	The Iowa Valley Manager's Association wants a function that reads in a floating 
	point array of any size, adds 5 percent to each number, prints out the total and
	 average for the array along with the highest and lowest values from with the 
	 array then returns the altered array to the main program via reference.

Write a program that creates the function described in the above paragraph. 
Your program should test out the function with three different calls to the 
function using three different arrays.

*/

/*
	Mohamed Sharif
	msharif@dmacc.edu
	
	This program was so confusing and hard. 
	This program checks set values of array and * 0.5.
*/


#include <iostream>
#include <iomanip>
using namespace std;

void thisFunc(float []);


int main(){
float  array1[4]={20, 15, 25,32};

thisFunc(array1);
//thisFunc(array2);
//thisFunc(array3);


//int const SIZE =2;
int const INIT =0;
int const INCREMENT =1;
//string players[SIZE];
//double score[SIZE];
double average=0;
double sum =0;
string eval ="";


//
//int SIZE= sizeof(arr)/sizeof(arr[0])



    return 0;
}





void thisFunc(float arr[]){
    //needs fixing
int SIZE= (sizeof(arr)/sizeof(arr[0]))+1;

float const PERCENT =0.05;
int const INIT =0;


for (int i =INIT; i<SIZE; i++){
    arr[i]=arr[i] +arr[i]*PERCENT;

cout<<"Size of Array: "<<SIZE<<endl;
cout<<"Data: "<<arr[i]<<endl;
}
}
