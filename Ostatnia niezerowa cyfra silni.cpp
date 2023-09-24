#include <bits/stdc++.h>
using namespace std;
const int MAX = 10;
int cyfra[MAX];

int D(long long n){
	if(n <= 9){
		return cyfra[n];
	}
	if(((n / 10)%10)%2 == 1){
		return (4 * D(n / 5) * cyfra[n%10])%10;
	}
	return (6 * D(n / 5) * cyfra[n%10])%10;
}

int main() {
	long long n; cin >> n;
	int silnia = 1;
	cyfra[0] = silnia;
	for(int i = 1; i <= 9; i++){
		silnia *= i;
		if(i == 5){
			silnia /= 10;
		}
		cyfra[i] = silnia%10;
	}
	cout << D(n) << "\n";
	return 0;
}
