#include <iostream>
using std::cin;
using std::cout;

int main()
{
	/* TODO: try to find an example violating the "cancellation law".
	 * That is, declare three doubles, d,e,f, and give them values such
	 * that d != e, and yet the sum of d+f is equal to e+f.
	 * Takeaway: prefer integers if they are an option! */
	/* NOTE: if you need a hint, remember that floating point numbers
	 * are stored in something like scientific notation -- there is a
	 * fixed amount of space to write the exponent, and there is also
	 * a fixed amount of space for the coefficient... */
	
	double dd = 0.2;
	double d = dd + dd + dd;
	double e = 0.6;
	double f = 5;

	if (d != e && d + f == d + f)
	{
		cout << "Congrats, you found the number 5.6!" << "\n";
	}
	else
	{
		cout << "YOU SUCK!" << "\n";
	}

	//I did not understand this assignment well. Why do some numbers work, but some others do not?

#if 0
	if (d != e)
	{
		cout << "They are not equal <-- You want this." << "\n";
	}
	else 
	{
		cout << "This is equal <-- Do not want this" << "\n";
	}
#endif

	/*
	cout << "e: "<< e << "\n";
	cout << "DD: "<< dd << "\n";
	cout << "e + f: "<< e + f << "\n";
	cout << "d + f: "<< d + f << "\n";

	printf("d = %.17f\n", d);
	printf("e = %.17f\n", e);
	*/

	return 0;
}

// vim:foldlevel=2
