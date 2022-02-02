// C++ implementation of the above approach
#include <bits/stdc++.h>

using namespace std;

// Return the number of odd numbers
// in the range [L, R]
int countOdd(int L, int R){

	int N = (R - L) / 2;

	// if either R or L is odd
	if (R % 2 != 0 || L % 2 != 0)
		N += 1;

	return N;
}

// Driver code
int main()
{
	int L = 3, R = 7;
	int odds = countOdd(L, R);
	int evens = (R - L + 1) - odds;
	
	cout << "Count of odd numbers is " << odds << endl;
	cout << "Count of even numbers is " << evens << endl;
	return 0;
}

// This code is contributed by Rituraj Jain
