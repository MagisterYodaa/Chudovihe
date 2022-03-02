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


Задание 2
	
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


Заание 3
	

