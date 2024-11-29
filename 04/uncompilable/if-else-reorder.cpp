/* Consider the following generic if statement, where A,B,C represent
 * boolean expressions: */

if (A) {
	X();
} else if (B) {
	Y();
} else if (C) {
	Z();
}

/* TODO: see if you can come up with logical conditions on the boolean
 * expressions A,B,C that would ensure the if statement could be rearranged in
 * any order, and still be *functionally equivalent*, meaning that the
 * reordering does not change what the program actually does/computes.  There
 * are 3! = 6 rearrangements (including the original).  If you need a hint,
 * maybe think about Venn diagrams.  And to make sure you understand what I'm
 * asking, here are a few examples of rearrangements: */

if (A) {
	X();
} else if (C) {
	Z();
} else if (B) {
	Y();
}

if (B) {
	Y();
} else if (C) {
	Z();
} else if (A) {
	X();
}

if (C) {
	Z();
} else if (A) {
	X();
} else if (B) {
	Y();
}

/* I am not sure how else we can rearrange them? The professor already found all the different weays you can 
	rearrange them to be honest. Some ideas I had were to combine conditions together via && or ||, but
		that would mean that the conditions respective pieces of code would not be aligned correctly.
	
	ex: If we put A and B in the same else if and had B's code be put in just an else statement... it would be
	wrong since B's code needs to be attached to B.*/



/* Lastly, for concreteness, here is a situation where they can NOT be
 * arbitrarily rearranged without changing the program's behavior (assuming
 * X,Y,Z each do something different, of course): */

if (i < 5 || i > 15) {
	X();
} else if (i == 7 || i == 3) {
	Y();
} else if (i > 20) {
	Z();
}


// vim:foldlevel=2
