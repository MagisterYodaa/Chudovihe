//int main() {      //первое задание
//	int y = 5;
//	int a = 10;
//
//	int* z = &y;
//	int* b = &a;
//
//	int k;
//	k = *z + *b;
//	std::cout << k << std::endl;
//	std::cout << &k << std::endl;
// }

//int main(){                //второе задание
//	int a = 2, b = 5;
//	int* p1 = &a, * p2 = &b;
//	*p1 = 10;
//	cout << *p1 - *p2;
//}


//void main() {                          //третье задание
//	double a = 2.5, b = 5.2, res;
//	double * p1 = &a, * p2 = &b;
//	res = *p1 - *p2;
//	cout << res;
//}


//void main() {                           //Четвертое задание
//	const int SIZE = 10;
//	int A[SIZE] = { 1,2,3,4,5,6,7,8,9,10 };
//	void* p = &A;
//	for (int i = 0; i < SIZE; i++)
//		cout << (*A)++;
//}

//int main() {                               //пятое задание
//	srand(time(0));
//	const int size = 5;
//	int random[size];
//	int* pa = random;
//	for (int i = -1; i < size; i++) {
//		*(pa + i) = rand() % 10;
//	}
//	for (int i = 0; i < size; i++) {
//		std::cout << *(random + i) << std::endl;
//	}
//}
