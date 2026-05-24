#include"common.h"
 template<typename T>
T function(T argument) {
	
	return argument * argument;



}
template<typename T>
std::vector<T>& function(std::vector<T>& argument) {

	for (int i = 0;i < argument.size();i++) {
		argument[i] *= argument[i];
	}
	return argument;



}




int main(int aargc, char** argv) {

	std::vector<int> arr = { 1, 2, 3 };
	function(arr);
	for (int i : arr) {
		std::cout << i;
	}

	return 0;
}