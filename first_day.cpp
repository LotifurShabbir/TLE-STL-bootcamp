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

	//**pair
	pair<int, int> p1 = {1, 2}, p2 = {3, 4};
	cout << p1.first << " " << p1.second << nline;
	cout << (p1 < p2) << nline;

	//**vector of pair
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

	//**sets
	//for search, remove, insert the time complexity O(logN)
	set<int>a = {2, 5, 85, 1, 56, 20};

	a.insert(10);
	a.insert(1);
	a.insert(30);
	a.insert(30);
	a.insert(100);
	a.insert(100);

	a.erase(100);

	for (auto x : a) {
		cout << x << nline;
	}

	//**map
	//for search, remove, insert the time complexity O(logN)

	std::map<int, string> map; //can be string string and so on
	map[4] = "shabbir";
	map[7] = "Lotifur";
	cout << map[7] << nline;
	map[1000] = "Bracu";


	//map stores values in pairs
	for (auto [key, value] : map) {
		cout << key << " " << value << nline;
	} //structured bindings

	// < cpp17
	for (auto i : map) {
		cout << i.first << " " << i.second << nline;
	}




	return 0;
}