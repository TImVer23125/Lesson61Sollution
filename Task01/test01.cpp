#include <iostream>
using namespace std;

int main() {
	int* ptr = NULL;
	int number = 10;

	ptr = &number;

	*ptr *= 2;

	cout << &number << " - " << number << endl;
	cout << ptr << " - " << *ptr << endl;
	cout << main << " - " << *main << endl;
	return 0;
}