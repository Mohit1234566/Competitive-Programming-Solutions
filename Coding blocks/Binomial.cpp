// A naive recursive C++ implementation
/*C(n, k) = C(n-1, k-1) + C(n-1, k)
   C(n, 0) = C(n, n) = 1*/
#include <bits/stdc++.h>
using namespace std;

// Returns value of Binomial Coefficient C(n, k)
int binomialCoeff(int n, int k)
{
	// Base Cases
	if (k == 0 || k == n)
		return 1;

	// Recur
	return binomialCoeff(n - 1, k - 1) +
				binomialCoeff(n - 1, k);
}

/* Driver code*/
int main()
{
	int n = 5, k = 2;
	cout << "Value of C("<<n<<", "<<k<<") is " << binomialCoeff(n, k);
	return 0;
}

// This is code is contributed by rathbhupendra
