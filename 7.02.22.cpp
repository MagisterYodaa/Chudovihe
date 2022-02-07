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
