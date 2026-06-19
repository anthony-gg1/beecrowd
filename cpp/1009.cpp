#include<iostream>
#include<iomanip>
using namespace std;

int main() {
	string nome;
	double salario, vendas;
	cin >> nome >> salario >> vendas;
	cout << fixed << setprecision(2);
	cout << "TOTAL = R$ " << (vendas * 0.15) + salario << endl;
	return 0;
}
