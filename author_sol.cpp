#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n, l, r;
	cin >> n >> l >> r;
	// the minimal sum is achieved when we take powers of two from 2 ^ 0 to 2 ^ (l - 1)
	// and set the other (n - l) (repeated) elements equal to 2 ^ 0 (smallest power)
	int mn = 0;
	for (int i = 0; i < l; i++) {
		mn += (1 << i);
	}
	mn += (n - l);
	// the maximal sum is achieved when we take powers of two from 2 ^ 0 to 2 ^ (r - 1)
	// and the other (n - r) (repeated) elements equal to 2 ^ (r - 1) (largest power)
	int mx = 0;
	for (int i = 0; i < r; i++) {
		mx += (1 << i);
	}
	mx += ((n - r) * (1 << (r - 1)));
	cout << mn << " " << mx << '\n';
	return 0;
}
