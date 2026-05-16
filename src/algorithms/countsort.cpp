#include "common.h"
void count_sort(std::vector<int>& arr) {
	std::vector<int> arr_t{};
	for (int i = 10;i < 25;i++) {
		int k = 0;
		for (int j : arr) {
			if (j == i) {
				k++;
			}

		}
		for (int h = 0;h < k;h++) {
			arr_t.push_back(i);
		}
	}
	arr = arr_t;



}






int main(int argc, char** argv) {
	std::vector<int> arr = { 19, 14, 22, 22,17, 22, 13, 21, 20, 24, 18, 10, 17, 16, 17, 20, 22, 11, 20, 16, 14, 13, 10, 22, 18, 14, 16, 24, 19, 17 };
	std::cout << "Массив до сортировки: ";
	for (int i : arr) {
		std::cout << i << " ";
	}
	count_sort(arr);
	std::cout << "\nМассив после сортировки: ";
	
	for (int i : arr) {
		std::cout << i << " ";
	}
	std::vector<int> arr1 = { 16, 17, 14, 20, 22, 20, 17, 22, 16, 19, 23, 24, 20, 22, 21, 18, 14, 16, 17, 21, 10, 11, 19, 23, 11, 11, 17, 17, 11, 21, 17, 11, 17, 16, 12, 11, 16, 22, 23, 16 };
	std::cout << "Массив до сортировки: ";
	for (int i : arr1) {
		std::cout << i << " ";
	}
	count_sort(arr1);
	std::cout << "\nМассив после сортировки: ";

	for (int i : arr1) {
		std::cout << i << " ";
	}

	std::vector<int> arr2 = { 21, 15, 19, 18, 23, 12, 18, 18, 19, 23, 12, 20, 15, 22, 21, 18, 19, 20 ,12, 16, 20, 14, 17, 13, 10 ,23, 19, 14, 10, 22, 19, 12, 24, 23, 22, 15, 13, 22, 18 ,18 ,11 ,23 ,24, 17, 10 };
	std::cout << "Массив до сортировки: ";
	for (int i : arr2) {
		std::cout << i << " ";
	}
	count_sort(arr1);
	std::cout << "\nМассив после сортировки: ";

	for (int i : arr2) {
		std::cout << i << " ";
	}
	

	



	return 0;

}