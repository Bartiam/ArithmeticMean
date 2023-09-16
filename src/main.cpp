#include <iostream>

template<typename T>
void arithmetic_mean(T* arr, const int* SIZE)
{
	T temp = arr[0];
	for (int i = 1; i < *SIZE; ++i)
		temp += arr[i];
	std::cout << temp / *SIZE << std::endl;
}

template<typename T>
void fill_array(T* arr, const int* SIZE)
{
	T temp;
	for (int i = 0; i < *SIZE; ++i)
	{
		std::cout << "Fill in the array. " << "element: " << i << " = ";
		std::cin >> temp;

		arr[i] = temp;
	}

	arithmetic_mean(arr, SIZE);
}

int main()
{
	const int SIZE = 4;
	double* arr = new double[SIZE];

	fill_array(arr, &SIZE);

	delete[] arr;

	return 0;
}