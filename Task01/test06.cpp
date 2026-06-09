#include <iostream>
using namespace std;

#define SIZE 5

int main() {
	int size;

	cout << "Input size of array: ";
	cin >> size;

	int* array = new int[size] {};

	for (int i = 0; i < size; i++)
	{
		cout << array[i] << " ";
	}

	delete[] array;

	return 0;
}