#include <iostream>
using std::cin;
using std::cout;

int main()
{
	/* TODO: Simplify this program as much as possible.  (NOTE: If the
	 * simplification does not feel a bit dramatic, maybe ask me if
	 * you've got the right answer.) */
	int x;

#if 0
	while (cin >> x) 
	{
		if ((x != 3 || x != 7) && (x != 0 || x != 1)) /*This is basically always true because it is all OR statements and it says  if everything
														does not equal a number... as in any number would work when paried with the OR statements.*/
		{
			cout << x << "\n";
		} 
		else if (x + 1 > 13) 
		{
			cout << x + 1 << "\n";
		}
	}
#endif

	while (cin >> x) 
	{
		if (x >= 13) 
			/* We have to do x >= 13 because the previous conditional was x + 1 > 13, so if we subtract one on both sides, we would get x > 12,
				but another way of saying this is also x >= 13. */
		{
			cout << x + 1 << "\n";
		} 
		else 
		{
			cout << x << "\n";
		}
	}
	return 0;
}

// vim:foldlevel=2
