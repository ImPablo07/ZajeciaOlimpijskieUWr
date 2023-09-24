#include <bits/stdc++.h>
using namespace std;

int main() {
	int n; cin >> n;
	const int MAX = 1e6 + 1;
	int A[MAX] = {};
	while(n--){
		int X; cin >> X;
		A[X]++;
	}
	int wyn = 0;
	for(int i = 1; i <= MAX - 1; i++){
		wyn += A[i] / 3;
	}
	cout << wyn << "\n";
	return 0;
}