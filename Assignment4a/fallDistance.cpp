/*************************************************************************
 * *Author: Paul Leone
 * *Date: 1/30/2019
 * *Description: This program determines the distance an object falls due
 * * to gravity in a specifice time period. The function returns the
 * * distance in meters.
 * **********************************************************************/
#include <iostream>
#include <cmath>
using std::cout;
using std::cin;
using std::endl;

//Function prototype
double fallDistance(double time);

/*
int main()
{

double time = 0;
double distance;

	//Enter a time to be calculated then call the function
	cout << "Enter the amount of time falling\n";
	cin >> time;
	distance = fallDistance(time);
	cout << distance << endl;

return 0;
}
*/

/************************************************************
 * This function uses the formula to determine the distance
 * an object falls due to gravity in a specific time period
 * *********************************************************/

double fallDistance(double time)
{
	const double gee = 9.8;
	double result;
	result = (1/2.0) * (gee * pow(time , 2));  //Formula
	return result;
}

