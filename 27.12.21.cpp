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
#include <iostream>
#include <windows.h>

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int a;
    int b = 0;
    int i = 0;
    std::cout << "Введите число:" << std::endl;
    std::cin >> a;
    while (i <= a){
        b = i + b;
        std::cout << b << std::endl;
        i++;
    }
}
Задание N5
#include <iostream>
#include <windows.h>

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int a;
    int b = 1;
    int i = 1;
    std::cout << "Введите число:" << std::endl;
    std::cin >> a;
    while (i <= a) {
        b = i * b;
        std::cout << b << std::endl;
        i++;
    }
}
Задание N6
#include <iostream>
#include <windows.h>

int main() {
	int a;
	std::cout << "Vvedite kolichestvo chisel: ";
	std::cin >> a;
	double b[1000];
	int d = 0;
	int v = 0;
	for (int i = 0; i < a; i++) {
		std::cin >> b[i];
		v += b[i];
		d++;
	}

	double total = v / d;
	std::cout << total << std::endl;
}
}
Задание N7
int a;
	int origin;
	std::cout << "Vvedite chilslo: ";
	std::cin >> a;
	origin = a;
	int rev = 0;
	int r[100];
	int count = 0;
	int total = 0;
	while (true) {
		r[count] = a % 10;
		a = a / 10;
		if (a == 0) break;
		count++;
	}
	for (int i = 0; i <= count; i++) {
		rev = r[i] * pow(10, count - i);
		total = total + rev;
	}

	int first = 0;
	for (int i = 0; i < 3; i++) {
		first += (origin % 10) * 10;
		origin /= 10;
	}

	int second = 0;
	for (int i = 0; i < 3; i++) {
		second += (total % 10) * 10;
		total /= 10;
	}

	if (first == second) { std::cout << "Lucky number" << std::endl; }
	else { std::cout << "Not Lucky" << std::endl; }
