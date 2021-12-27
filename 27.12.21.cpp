задание N1
#include <iostream>
#include <windows.h>

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int n;
	std::cout << "Введите число" << std::endl;
	std::cin >> n;
	int t1 = 0, t2 = 1, sum = 0;
	std::cout << t1 << ' ' << t2 << ' ' << std::endl;
	sum = t1 + t2;

	/*for (int i = 1; i <= n; i++) {
		if (i == 1) {
			std::cout << t1 << ' ' << std::endl;
			continue;
		}
		if (i == 2) {
			std::cout << t2 << ' ' << std::endl;
			continue;
		}

		
		
		sum = t1 + t2;
		std::cout << sum << ' ' << std::endl;

		t1 = t2;
		t2 = sum;
		
	}*/
	while (sum <= n) {
		std::cout << sum << ' ' << std::endl;
		t1 = t2;
		t2 = sum;
		sum = t1 + t2;
	}
}






 задание N2
#include <iostream>
#include <windows.h>

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	/*int n;
	int g;
	int f;
	int i = 10;
	std::cout<< "Введите число:" << std::endl;
	std::cin >> n;
	int x = n % 10;
	std::cout << x << std::endl;
	n /= 10;
	n = n / 10;
	x = n % 10;
	std::cout << x << std::endl;
	while (x > 0) {
		g = x * i;
		f = g + x;
		std::cout << f << std::endl;
		break;
	}*/
	int n;
	std::cin >> n;
	int g = 0;

	while (n) {
		g = g * 10 + n % 10;
		n /= 10;
	}
	std::cout << g << std::endl;
	

	
}


задание N3
#include <iostream>
#include <windows.h>

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int n;
	std::cin >> n;
	int g = 0;

	while (n) {
		g = g * 10 + n % 10;
		n /= 10;
	}
	std::cout << g << std::endl;
	if (n = g) {
		std::cout << "Это ПАЛИНДРОМ" << std::endl;
	}
	else if(n != g)
	{
		std::cout << "Это не ПАЛИНДРОМ" << std::endl;
	}

}

Задание N4

