#include "common.h"
void func(std::vector<int> arr1,int(*sum)(std::vector<int>& arr), int(*divis)(std::vector<int>& arr)) {

	std::cout <<"get_sum() = "<< sum(arr1);
	std::cout <<"get_count() = "<< divis(arr1);



	

}

int summa(std::vector<int>& arr) {
	int summ = 0;
	for (int i : arr) {
		summ += i;
	}
	return summ;
}
int division(std::vector<int>& arr) {
	int count = 0;
	for (int i : arr) {
		if (i % 3 == 0) {
			count++;
		}
	}
	return count;
}


int main() {
	std::vector<int> array = { 1,2,3,4,5,655,7,8 };
	func(array, summa, division);


}