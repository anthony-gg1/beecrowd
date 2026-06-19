#include<iostream>
#include<iomanip>
using namespace std;

int main() {
	int n, h;
	double sh;
	cin >> n >> h >> sh;
	cout << "NUMBER = " << n << endl;
	cout << fixed << setprecision(2);
	cout << "SALARY = U$ " << h * sh << endl;
	return 0;
}
