#include "TkUtil/Timer.h"
#include <iostream>
#include <math.h>


USING_STD
USING_UTIL


int main (int argc, char* argv [])
{
	Timer	timer;

	timer.start ( );
	cout << "Timer started ..." << endl;

	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 1000000; j++)
			sin ((double)j);

		timer.stop ( );
		cout << "Elapsed time : " << timer.duration ( ) << " sec "
		     << "micro-time : " << timer.microduration( ) << " microsec" << endl
		     << "CPU time : " << timer.cpuDuration ( ) << endl;
	}	// for (int i = 0; i < 10; i++)

	return 0;
}	// main
