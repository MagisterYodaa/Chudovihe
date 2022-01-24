#include <iostream>
#include <Windows.h>

using namespace std;

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	srand(time(0));
	int randomNumber = rand() % 100;
	cout << "Компьютер задумал число угодай его" << endl;

	int a;
	while (true) {
		cout << "-> ";
		cin >> a;
		if (a == randomNumber) {
			cout << "Ты попал в точку" << std::endl;
			break;
		}
		else if (a > randomNumber) {
			cout << "Берите ниже" << endl;
		}
		else if (a < randomNumber) {
			cout << "Берите выше" << endl;
		}

	}
}


наоборот 
#include <iostream>
#include <Windows.h>

using namespace std;

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int randomNumber;
	int low = 1;
	int high = 100;
	int mid, compare;
	int guessNumber;
	cout << "Ты загадал число, компьютер угадывает" << endl;
	do {
		mid = (low + high) / 2;
		printf("Ваше число %d ?\n", mid);
		cout << "1 - Число больше\n2 - Число меньше\n0 - Да";
		cin >> compare;

		if (compare == 1) {
			low = mid + 1;
		}
		else if (compare == 2) {
			high = mid + 1;
		}
		else if (compare == 0) {
			printf("Ваше число %d", mid);
		}
	} while (compare != 0);
	

	
}

пузырьки
#include <iostream>
#include <Windows.h>

using namespace std;

void output(int* arr, int SIZE) {
	for (int i = 0; i < SIZE; i++) {
		cout << arr[i] << ' ';
	}
	cout << "\n";
}

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	const int SIZE = 10;
	int arr[SIZE];
	

	for (int i = 0; i < SIZE; i++) {
		arr[i] = rand() % 1000;
	}
	output(arr, SIZE);
	int temp;
	for (int i = 0; i < SIZE - 1; i++) {
		for (int j = 0; j < SIZE - i - 1; j++) {
			if (arr[j] > arr[j + 1]) {
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
	output(arr, SIZE);
}



по убыванию 

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
