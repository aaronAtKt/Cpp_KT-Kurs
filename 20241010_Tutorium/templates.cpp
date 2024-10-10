#include <iostream>
#include <type_traits>
#include <concepts>
#include <coroutine>
using namespace std;

// SFINAE = Substituion Failure is Not an Error (C++17)
template <typename T> 
typename enable_if<is_integral<T>::value, T>::type
myMax(T x, T y) {
	return (x > y) ? x : y;
}

// Concepts (ab C++20)
template <typename T = int>
requires is_floating_point_v<T>
T add(T a, T b) {
	return a + b;
}

template <class T> void bubbleSort(T a[], int n) {
	for (int i = 0; i < n - 1; i++) {
		for (int j = n - 1; i < j; j--) {
			if (a[j] < a[j - 1])
				swap(a[j], a[j - 1]);
		}
	}
}

int mainx() {
	// int
	//cout << myMax<int>(3, 7) << endl;
	// double
	// cout << myMax<double>(5.3, 5.7) << endl;
	// char
	//cout << myMax<char>('ä', 'e') << endl;

	int a[5]{ 50, 10, 40, 20, 30 };
	int n = size(a);

	bubbleSort<int>(a, n);

	cout << "Sortiertes Array: ";
	for (int i = 0;i < n;i++)
		cout << a[i] << " ";

	return 0;
} 