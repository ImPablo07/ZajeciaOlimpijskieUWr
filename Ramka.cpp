#include <bits/stdc++.h>
using namespace std;

int main() {
	string napis; cin >> napis;
	cout << "+-";
	for(int i = 1; i <= napis.size(); i++){
		cout << "-";
	}
	cout << "-+\n";

	cout << "| ";
	for(int i = 1; i <= napis.size(); i++){
		cout << " ";
	}
	cout << " |\n";

	cout << "| " << napis << " |\n";

	cout << "| ";
	for(int i = 1; i <= napis.size(); i++){
		cout << " ";
	}
	cout << " |\n";

	cout << "+-";
	for(int i = 1; i <= napis.size(); i++){
		cout << "-";
	}
	cout << "-+\n";
	return 0;
}
