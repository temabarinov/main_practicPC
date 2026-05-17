#include <iostream>
#include <vector>
#include <algorithm>

// Функция выбора пивота и разбиения массива
int partition(std::vector<int>& arr, int low, int high) {
    int pivot = arr[high];
    int i = low - 1;
    for (int j = low;j < high;j++) {
        if (arr[j] < pivot) {
            i++;
            std::swap(arr[i], arr[j]);
        }
    }
    std::swap(arr[i + 1], arr[high]);
    return i + 1;
}
void quicksortre(std::vector<int>& arr, int low, int high) {
    if (low <= high) {
        int pi = partition(arr, low, high);
        quicksortre(arr, low, pi - 1);
        quicksortre(arr, pi + 1, high);

    }
}
void quicksort(std::vector<int>& arr, int size) {
    if (size >= 1) {
        quicksortre(arr, 0, size - 1);
    }
}

int main() {
	setlocale(LC_ALL, "Rus");
    std::vector<int> arr{ 3, 43, 38, 29, 18, 72 ,57, 61, 2, 33 };
	
	std::cout << "Массив до сортировки: ";
	for (int i : arr) {
		std::cout << i << " ";
	}
	quicksort(arr,arr.size());
	std::cout << "\nМассив после сортировки: ";

	for (int i : arr) {
		std::cout << i << " ";
	}
	std::vector<int> arr1 = { 88, 91, 87, 59, 53, 49, 29 ,16, 4, 27, 28, 89, 2, 25, 74 };
	std::cout << "Массив до сортировки: ";
	for (int i : arr1) {
		std::cout << i << " ";
	}
	quicksort(arr1,arr1.size());
	std::cout << "\nМассив после сортировки: ";

	for (int i : arr1) {
		std::cout << i << " ";
	}

	std::vector<int> arr2 = { 24, 66, 20, 79, 30, 16, 19, 62, 94, 59, 0, 7, 59, 90, 84, 60, 95, 62 };
	std::cout << "Массив до сортировки: ";
	for (int i : arr2) {
		std::cout << i << " ";
	}
	quicksort(arr2,arr2.size());
	std::cout << "\nМассив после сортировки: ";

	for (int i : arr2) {
		std::cout << i << " ";
	}


	return 0;
}