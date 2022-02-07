Задание 1
#include <iostream>
#include <Windows.h>




int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int a;
	int b;
	int r;
	std::cout << "Дано число а: " << std::endl;
	std::cin >> a;
	b = a * a;
	r = b * b;
	std::cout << r << std::endl;
	



	int c;
	int d;
	int y;
	std::cout << "Введите число с: " << std::endl;
	std::cin >> c;
	d = c * c * c;
	y = d * d;
	std::cout << y << std::endl;


	int o;
	int p;
	int e;
	int z;
	std::cout << "Введите число o: " << std::endl;
	std::cin >> o;
	p = o * o * o;
	e = p * p;
	z = e * e * p;
	std::cout << z << std::endl;
}



Задание 5
	

	std::cout << "Звездочки (O_o)" << std::endl;
	for (int i = 1; i <= 4; i++) {
		if (i % 2 == 0) {
			for (int i = 1; i <= 4; i++) {
				std::cout << "*";
				std::cout << "*";
			}
		}
		else {
			for (int i = 1; i <= 4; i++) {
				std::cout << "*";
				std::cout << "*";
			}
		}
		std::cout << std::endl;
	}
	
	

Задание 4
		int a, b, c;
	std::cin >> a >> b >> c;
	if (a == b) {
		std::cout << "а и b равны!" << std::endl;
	}
	else if (a == c) {
		std::cout << "а и c равны!" << std::endl;
	}
	else if (b == c) {
		std::cout << "b и c равны!" << std::endl;
	}
	else {
		std::cout << "их нет" << std::endl;
	}


Задание 6
