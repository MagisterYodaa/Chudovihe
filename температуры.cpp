#include <iostream>
#include <Windows.h>

using namespace std;

int main() {
	int user;
	int cels;
	int answcels;
	int answfareng;
	int foreng;
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	cout << "Выбирите тип градуса! o_O" << endl;
	cout << "Нажмите 1 чтобы выбрать Цельсия ^(O_o)^" << endl;
	cout << "Нажмите 2 чтобы выбрать Фарингейт (O__o)" << endl;

	cin >> user;
	if (user == 1) {
		cin >> cels;
		answfareng = cels * 1.8 + 32;
		cout << answfareng << endl;
	}
	else if (user == 2) {
		cin >> foreng;
		answcels = (foreng - 32) * 5/9;
		cout << answcels << endl;
	}


}
