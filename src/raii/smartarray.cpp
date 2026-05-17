#include <common.h>

class smartarray {
private:
	int* arr = nullptr;
	int size = 0;
	int count = 0;
public:
	
	smartarray(int _size) : arr{ new int[_size]()}, size{_size - 1} {
	}
	~smartarray() {
		if (arr != nullptr) {
			delete[] arr;
	} 
	}
	void add_element(int new_element) {
		if (count > size) {
			throw std::exception("error. array is full");
		}
		arr[count] = new_element;
		count++;

	}
	int get_element(int element_num) {
		if (element_num > size || element_num < 0) {
			throw std::exception("error. index does not exist");
		}
		return arr[element_num];
	}

	smartarray& operator=(const smartarray& assigned) {
		if (this == &assigned) {
			return *this;
		}
		delete[] arr;
		size == assigned.size;
		count == assigned.count;

		for (int i = 0;i < count;i++) {
			arr[i] = assigned.arr[i];
			
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