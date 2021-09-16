#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	while (tt--) {
		int N;
		string S;
		cin >> N >> S;
		// Since we just want to make two numbers such that the first 
		// number is smaller than the second, our best bet is to use 
		// only the first digit for the first number and the rest of 
		// the digits for the second number. Note that since the numbers 
		// can have up to 300 digits we shouldn't actually evaluate the 
		// second number. Instead, since the digits only include 1 through 
		// 9, we can handle that case by checking the number of digits.
		if (N == 2 && S[0] >= S[1]) {
			cout << "NO" << '\n';
		} else {
			cout << "YES" << '\n';
			cout << 2 << '\n';
			cout << S[0] << " " << S.substr(1) << '\n';
		}
	}
	return 0;
}
