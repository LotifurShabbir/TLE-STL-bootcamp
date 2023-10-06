#include<bits/stdc++.h>
#define MAX 1000006
#define FAST ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define nline "\n"
#define ll long long int
#define pb push_back
using namespace std;
// !-------functions------!


int main()
{
#ifndef ONLINE_JUDGE

	// For getting input from input.txt file
	freopen("Input.txt", "r", stdin);

	// Printing the Output to output.txt file
	freopen("Output.txt", "w", stdout);

#endif
	FAST;

	pair<int, int> p1 = {1, 2}, p2 = {3, 4};
	cout << p1.first << " " << p1.second << nline;
	cout << (p1 < p2) << nline;

	//vector of pair
	std::vector<pair<int, int>> v = {
		{1, 2},
		{3, 4},
		{2, 9},
		{4, 4}
	};

	for (auto it : v) {
		cout << it.first << " " << it.second << nline;
	}

	//output using Structured Bindings (for C++17)
	for (auto [first, second] : v) {
		cout << first << " " << second << nline;
	}

	//inserting a value in vector
	std::vector<int> v = {
		1,
		2,
		3,
		4,
		5
	};

	v.insert(v.begin(), 10); //10 will set in 0th index and then all value will be right shifted one step

	for (auto a : v) {
		cout << a << " ";
	}

	return 0;
}