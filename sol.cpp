#include <bits/stdc++.h>

using namespace std;
	
int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n1, n2, n3;
	cin >> n1 >> n2 >> n3;
	// create 3 vectors for input
	vector<int> a(n1), b(n2), c(n3);
	// create a 'size' variable to determine the size of the vector for counting
	int size = INT_MIN;
	for (int i = 0; i < n1; i++) {
		cin >> a[i];
		size = max(size, a[i]);
	}
	for (int i = 0; i < n2; i++) {
		cin >> b[i];
		size = max(size, b[i]);
	}
	for (int i = 0; i < n3; i++) {
		cin >> c[i];
		size = max(size, c[i]);
	}
	// create a 'counter' vector with ('size' + 1) as its limit
	// afterwards, count the occurrence every number in all the 3 vectors
	vector<int> counter(size + 1, 0);
	for (int i = 0; i < n1; i++) {
		counter[a[i]]++;
	}
	for (int i = 0; i < n2; i++) {
		counter[b[i]]++;
	}
	for (int i = 0; i < n3; i++) {
		counter[c[i]]++;
	}
	// create a 'final_list' vector to store the consistent elements throughout the 3 vectors
	vector<int> final_list;
	for (int i = 0; i < (int) counter.size(); i++) {
		if (counter[i] >= 2) {
			// as stated in the problem statement, a number is considered as consistent
			// iff its occurrence is greater than or equal to 2
			final_list.emplace_back(i);
		}
	}
	// print the size of the 'final_list' vector
	cout << (int) final_list.size() << '\n';
	// print the elements in the 'final_list' vector
	for (auto x : final_list) {
		cout << x << '\n';
	}
	return 0;
}
