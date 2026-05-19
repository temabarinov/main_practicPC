#include"common.h"
 
int function(int argument) {
	
	return argument * argument;



}

std::vector<int>& function(std::vector<int>& argument) {

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