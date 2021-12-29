Задание N2
#include <iostream>
#include <Windows.h>

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int a = 15;
	int n;
	int distance = 0;
	std::cout << "Введите число" << std::endl;
	std::cin >> n;
	for (int i = 0; i < n; i++) {
		distance = distance + ( 2 * i + a);
		std::cout << distance << std::endl;
	}

}
Задание N3
