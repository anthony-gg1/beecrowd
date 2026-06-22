#include<iostream>
#include<iomanip>
using namespace std;

int main() {
	int h, v;
	cin >> h >> v;
	cout << fixed << setprecision(3);
	cout << (v * h) / 12.0 << endl;
	return 0;
}
