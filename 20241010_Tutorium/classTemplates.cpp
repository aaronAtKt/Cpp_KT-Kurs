#include <iostream>
using namespace std;

template <typename T> class Array {
private:
	T* ptr;
	int size;

public:
	Array(T arr[], int s);
	void print();
};

template <typename T> Array<T>::Array(T arr[], int s) {
	ptr = new T[s];
	size = s;
	for (int i = 0; i < size; i++)
		ptr[i] = arr[i];
}

template <typename T> void Array<T>::print() {
	for (int i = 0; i < size; i++) {
		cout << " " << *(ptr + i);
	}
	cout << endl;
}

template <class T, class U = char> class A {
	T x;
	U y;

public:
	A() {
		cout << "Konstruktor aufgerufen." << endl;
	}

	A(T x, U y) : x(x), y(y) { }
};


template <class T, int max> int arrMin(T arr[], int n)
{
	int m = max;
	for (int i = 0; i < n; i++)
		if (arr[i] < m)
			m = arr[i];

	return m;
}


template <class T> class Info {
public: 
	Info(T A) {
		cout << "A = " << A << " Anzahl der Bytes: " << sizeof(A) << endl;
	}
};



int main() {
	//char arr[5]{ 'H', 'a', 'l', 'l', 'o' };
	//Array<char> charArray(arr, 5);
	////charArray.print();

	//A<char, char> a;
	//A<int, double> b;
	//A<string> c;

	int arr1[] = { 10, 20, 15, 12 };
	int n1 = size(arr1);

	char arr2[] = { 3, 1, 2 };
	int n2 = size(arr2);

	//cout << arrMin<int, 1000>(arr1, n1) << endl;
	//cout << arrMin<char, 256>(arr2, n2) << endl;

	Info<char> p('x');

	Info<int> q(22);

	Info<float> r(2.25);

	return 0;
}