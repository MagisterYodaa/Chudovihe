#include <iostream>
#include <Windows.h>

int main() {
	srand(4784);
	int a[3][3];
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			a[i][j] = rand();
			std::cout << a[i][j] << "\t";
		}
		std::cout << "\n";
	}
}
