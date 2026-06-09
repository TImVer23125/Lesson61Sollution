#include <iostream>
using namespace std;

void init_random(int* array, int size) {
	for (int i = 0; i < size; i++)
	{
		*(array + i) = rand() % 100;
	}

}

int main() {
	int size = 10;

	//cout << "Input size of array: ";
	//cin >> size;

	//int* array = new int[size] {};

	int array[10];

	init_random(array, size);

	for (int i = 0; i < size; i++)
	{
		cout << array[i] << " ";
	}

	delete[] array;

	return 0;
}