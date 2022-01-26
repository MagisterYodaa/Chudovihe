задание №3
#include <iostream>
#include <Windows.h>


void output(int* arr, int size) {
	for (int i = 0; i < size; i++) {
		std::cout << arr[i] << ' ';
	}
}


int findMin(int* arr, int size) {
	int min = arr[0];
	int indexMin = 0;
	for (int i = 0; i < size; i++) {
		if (min < arr[i]) {
			min = arr[i];
			indexMin = 1;
		}
	}

	return indexMin;
}

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	const int size = 10;
	int arr[size];

	int newarray[size];
	int minEL;

	for (int i = 0; i < size; i++) {
		arr[i] = rand() % 1000;
	}
	output(arr, size);
	int temp;
	for (int i = 0; i < size - 1; i++) {
		for (int j = 0; j < size - i - 1; j++) {
			if (arr[j] < arr[j + 1]) {
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}

	output(arr, size);

	for (int i = 0; i < size; i++) {
		minEL = findMin(arr, size);
		newarray[i] = arr[minEL];
		arr[minEL] = INT_MAX;
	}


	output(newarray, size);
}
