#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ld long double
#define all(x) (x).begin(), (x).end()
#define pb push_back

int main()
{
	long long t;
	cin >> t; 
	while (t--)
	{
		long long a, b;
		cin >> a >> b; 

		if (b > a)
			swap(a, b);

		if (a == b)
			cout << 0 << " " << 0 << endl;
		else
		{
			long long gcd = a - b;

			long long moves = min(b % gcd, gcd - b % gcd);

			cout << gcd << " " << moves << endl;
		}
	}
	return 0;
}

