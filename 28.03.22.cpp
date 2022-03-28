//задание 1

    //задание 1 
//void show_by_index(int arr[], int len, int index) {
//    if (index > 0 && index < len) {
//        std::cout << arr[index] << std::endl;
//    }
//    else {
//        cout << "Bed index" << endl;
//    }
//}
//void show(int arr[], int len)
//{
//	for (int i = 0; i < len; i++)
//		printf(" %d", arr[i]);
//}
//int main()
//{
//	/* Объявляем пустой указатель */
//	int* array = nullptr;
//
//	/* Определяем случайный размер массива */
//	srand(time(NULL));
//	int size = rand() % 50 + 1;
//
//	/* Создание массива */
//	//array = (int*)malloc(size * sizeof(int));
//	array = new int[size];
//	if (array != nullptr)
//	{
//		for (int i = 0; i < size; i++)
//		{
//			array[i] = rand() % 50 + 1;
//		}
//	}
//	else
//		printf("Out of memory/");
//
//	/* Печать массива в консоль*/
//	show(array, size);
//
//	/* Очищаем память массива */
//	//free(array);
//	delete[] array;
//
//	/* Ожидание ввода символа с консоли */
//	getchar();
//
//	return 0;
//}



         //Задание 2


//
//void main() {
//    int arr[] = { 1,2,3,4,5,6,7,8 };
//    const int i = 0, size = 8;
//    for (int i = size - 1; i + 1; i--)
//        cout << arr[i] << ' ';
//}
