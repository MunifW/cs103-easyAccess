/* TODO: write a small program that prints an *ASCII table*.  That is,
 * it should print each character along side its numeric representation
 * in the ASCII system: * https://en.wikipedia.org/wiki/Ascii
 * A snippet of sample output might look like this:
 * ...
 * 65 :: A
 * 66 :: B
 * 67 :: C
 * ...
 * NOTE: you can trick cout into printing the ascii value of a character
 * simply by type-casting to integer (or by storing the character in an
 * integer variable and printing that instead).  Also note that the printable
 * range of ASCII values starts at 32 (space) and goes to 126.
 * */


#include <iostream>
using std::cin;
using std::cout;

int main()
{
	int upperCase;
	char upperCase2;

		for (int i = 33; i <= 126; i++) //Go to bottom for thought process
		// Professor said I could get rid of the i >= 33, and it should still work. TEST LATER ---> it worked
	{
		upperCase = i;
		upperCase2 = i;

		cout << upperCase << " :: " << upperCase2 << "\n";
	}

	return 0;
}

// vim:foldlevel=2

/* For the if statement, my thought process was that, for all the symbols and letters, I would need to print out the numerical values
using an int var, and then use a char variable for the actual symbols*/

/* So, I used a for loop to simply print out the symbols and numbers I needed, the condition in the middle, to me, reads as...
	If i is bigger than or equal to 33 and is less than or equal to 126, then print the symbols out.

	Since i is assigned to the value 33, it has to follow the conditional and print out the future values if i within the loop until
		the condition becomes false, which is when it reaches 126.*/