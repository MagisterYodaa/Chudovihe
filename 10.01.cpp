задание 2 
  #include <iostream>
#include <Windows.h>

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	std::cout << "Массив:" << std::endl;
	srand(4784);
	int a[3][3];
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			a[i][j] = rand();
			std::cout << a[i][j] << "\t";
		}
		std::cout << "\n\n";
	}
	std::cout << a[0][0] + a[0][1] + a[0][2] << "\n";
	std::cout << a[1][0] + a[1][1] + a[1][2] << "\n";
	std::cout << a[2][0] + a[2][1] + a[2][2] << "\n";
}

Задание 6
  
  
