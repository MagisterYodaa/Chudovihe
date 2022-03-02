Число фибоначи!"№;%
#include <iostream>
#include<cmath>

int fib(int n) {
	if (n == 0) {
		return 0;
	}
	else if (n == 1) {
		return 1;
	}
	else {
		return fib(n - 1) + fib(n - 2);
	}
}

int main() {
	std::cout << "Hello" << std::endl;
	std::cout << fib(10) << std::endl;

}

Задание 1
	
	#include <iostream>
#include<cmath>

int fib(int n) {
	if (n == 0) {
		std::cout << "Это нолик" << std::endl;
	}
	else {
		return n * n * n;
	}
}

int main() {
	std::cout << "Hello" << std::endl;
	std::cout << fib(5) << std::endl;

}


Задание 2,3
	
#include <iostream>
#include<cmath>

int fib(int n) {
	int sum;
	std::cin >> sum;
	if (n == 0) {
		std::cout << "Это нолик" << std::endl;
	}
	else {
		return n + sum;
	}
}

int fib2(int n) {
	int um;
	std::cin >> um;
	if (n == 0) {
		std::cout << "Это нолик" << std::endl;
	}
	else {
		return n * um;
	}
}

int main() {
	std::cout << "Snachalo slojenie" << std::endl;
	std::cout << fib(3) << std::endl;
	std::cout << "A teper umnojenie" << std::endl;
	std::cout << fib2(2) << std::endl;

}


Заание 4
	
#include <iostream>
#include <Windows.h>


int fib(int n) {
	int sum;
	std::cin >> sum;
	if (n < sum) {
		std::cout << "2 введеное число больше чем 1" << std::endl;
		return 0;
	}
	if (n > sum) {
		std::cout << "1 введеное число больше чем 2" << std::endl;
		return 0;
	}
	else {
		return 0;
	}
}

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	std::cout << "Snachalo slojenie" << std::endl;
	std::cout << fib(2) << std::endl;
}


Задание 5
	
#include <iostream>
#include <Windows.h>


int fib(int pervoe, int vtoroe, int tretie) {
	std::cin >> pervoe;
	std::cin >> vtoroe;
	std::cin >> tretie;

	if (pervoe > vtoroe && pervoe > tretie ) {
		std::cout << "Первое число самое большое!" << std::endl;
	}
	if (vtoroe > pervoe && vtoroe > tretie) {
		std::cout << "Второе число самое большое!" << std::endl;
	}
	else if (tretie > pervoe && tretie > vtoroe) {
		std::cout << "Третие число самое большое!" << std::endl;
	}
	else {
		return 0;
	}
}

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	std::cout << "Напишите ваши числа!!" << std::endl;
	std::cout << fib(1 , 2 , 3) << std::endl;
}


Задание 6,8
	
#include <iostream>
#include <Windows.h>
using namespace std;


void massiv()
{
	int a[10];
	int i;
	int sum = 0;
	srand(time(0));
	for (i = 0; i < 10; i++)
		a[i] = 1 + rand() % 25;
	for (i = 0; i < 10; i++)
		cout << a[i] << " "; 
	cout << endl;

	for (i = 0; i < 10; i++) {
		sum += a[i];
	}

	cout << sum << '\n';
}

int main()
{
	massiv();
	cout << "\n";
}



