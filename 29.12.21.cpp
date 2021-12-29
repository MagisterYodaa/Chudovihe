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
#include <iostream>
#include <windows.h>

int main() {
	srand(10);
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int arr[10];
	for (int i = 0; i < 10; i++) {
		int num = rand();
		if (i == 0) {
			arr[i] = num % 2 == 1 ? num : num + 1;
		}
		else {
			arr[i] = num;
		}
		arr[i] = rand();
		std::cout << arr[i] << std::endl;

	}
	int j = 0;
	int sum = 0;
	while (arr[j] % 2 == 1) {
		sum += arr[j];
		j++;
	}
	std::cout << sum << std::endl;
}
Задание N
