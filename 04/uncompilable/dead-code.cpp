/* "Dead code" is code that will never be executed (the flow of control will
 * never reach those statements).  For example: */

#if 0
if (true == false) {
	cout << "I'm dead\n"; // This is an example!!!!!!
}
#endif

#include <iostream>
using std::cin;
using namespace std;

/* Now consider a general if / else if... statement like this: */

if (A) {
	X();
} else if (B) {
	Y();
} else if (C) {
	Z();
} else {
	W();
}

/* I am not sure what to type here, but these are my thoughs:
	1. If condition A is met then Y, Z, and W will be dead
	2. If condition B is met then X, Z, and W will be dead
	3. If condition C is met, then Y, X, and W will be dead
	4. If none are met, then X, Y, Z will be dead. 
*/

#if 0
int main()
{
int x = 0;
std::cin >> x;

if (x == 5) 
{
	cout << "X() is alive! And Y(), Z(), W() are dead." << "\n";
}
else if (x == 7) 
{
	cout << "Y() is alive! And X(), Z(), W() are dead" << "\n";
} 
else if (x == 6) 
{
	cout << "Z() is alive! Amd X(), Y(), W() are dead" << "\n";
} 
else 
{
	cout << "W() is alive! And X(), Z(), Y() are dead" << "\n";
}
}
#endif



/* TODO: perhaps thinking in terms of Venn diagrams corresponding to the
 * conditions A,B,C, try to describe as precisely as you can when:
 *   - X(); will be dead code
 *   - Y(); will be dead code
 *   - Z(); will be dead code
 *   - W(); will be dead code
 * See if you can generalize the result to an arbitrary number of conditions.
 * */


// vim:foldlevel=2
