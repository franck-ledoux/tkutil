#include "TkUtil/Date.h"

#include <iostream>


USING_STD
USING_UTIL


static void display (const Date& date);


int main (int argc, char* argv [])
{
	Date	current;

	display (current);

	return 0;
}	// main


static void display (const Date& date)
{
	cout << "Nous sommes le " << date.getDate ( ) << "." << endl
	     << "Il est " << date.getTime ( ) << endl;
}	// display
