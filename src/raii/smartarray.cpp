#include <common.h>

class smartarray {
private:
	int* arr = nullptr;
	int size = 0;
public:
	int count = 0;
	smartarray(int a) : arr{ new int[a]()}, size{a - 1} {
	}
	~smartarray() {
		if (arr != nullptr) {
			delete[] arr;
	} 
	}
	void add_element(int b) {
		if (count > size) {
			throw std::exception("error. array is full");
		}
		arr[count] = b;
		count++;

	}
	int get_element(int indx) {
		return arr[indx];
	}

	smartarray& operator=(const smartarray& b) {
		if (this == &b) {
			return *this;
		}
		delete[] arr;
		size == b.size;
		count == b.count;

		for (int i = 0;i < count;i++) {
			arr[i] = b.arr[i];
			
		}
		return *this;

	}

};


int main(int argc, char** argv) {
	
	try {
		smartarray arr(5);
		arr.add_element(1);
		arr.add_element(4);
		arr.add_element(155);
		arr.add_element(14);
		arr.add_element(15);
		
		std::cout << arr.get_element(1) << std::endl;
	}
	catch (const std::exception& ex) {
		std::cout << ex.what() << std::endl;
	}
	return 0;

	
	
}