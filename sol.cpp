#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	while (tt--) {
		int n;
		cin >> n;
		string s;
		cin >> s;
		// to answer this efficiently, take the first characer (digit) and create
		// a number from all the remaining digits (this is valid since we can form
		// at least two (2) segments based on the problem statement)
		string first_segment = string(1, s[0]);
		string second_segment = s.substr(1, n - 1);
		// edge case: if the size of the first segment is equal to the size of the
		// second segment, then we need to check if the numerical equivalent of the
		// first segment is greater than or equal to the second segment
		if ((int) first_segment.size() == (int) second_segment.size()) {
			if ((s[0] - '0') >= (s[1] - '0')) {
				cout << "NO" << '\n';
				continue;
			}
		}
		cout << "YES" << '\n' << 2 << '\n';
		cout << first_segment << " " << second_segment << '\n';
	}
	return 0;
}
