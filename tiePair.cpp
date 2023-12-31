// CPP code to illustrate tie() in Pair
#include <bits/stdc++.h>
using namespace std;

// Driver Code
int main()
{
	pair<int, int> pair1 = { 1, 2 };
	int a, b;
	tie(a, b) = pair1; // the function of tie is basically to to assign value to integer
	cout << a << " " << b << "\n";

	pair<int, int> pair2 = { 3, 4 };
	tie(a, ignore) = pair2;//The special constant ignore can be used to specify elements of a tuple to be ignored instead of tied to a specific object.

	// prints old value of b
	cout << a << " " << b << "\n";

	// Illustrating pair of pairs
	pair<int, pair<int, char> > pair3 = { 3, { 4, 'a' } };
	int x, y;
	char z;

	// tie(x,y,z) = pair3; Gives compilation error
	// tie(x, tie(y,z)) = pair3; Gives compilation error
	// Each pair needs to be explicitly handled
	x = pair3.first;
	tie(y, z) = pair3.second;
	cout << x << " " << y << " " << z << "\n";
}

// contributed by sarthak_eddy.
