#include "common.h"
using namespace std;

template<typename T>
class myvector {
private:
	T* data1;
	int size1=0;
	int capacity = 0;
public:
	myvector() {
		data1 = nullptr;
	}
	~myvector() {
		delete[] data1;
	}
	
	void push_back1(T dat){
		if (size1 <= capacity) {
			if (capacity == 0) capacity = 5;
			else capacity += 5;
			T* temp = new T[capacity];
			for (int i = 0; i < size1;i++) {
				temp[i] = data1[i];
			}
			delete[] data1;
			data1 = new T[capacity];
			for (int i = 0;i < size1;i++) {
				data1[i] = temp[i];
			}


			data1[size1] = dat;
			size1++;
		}
	}


	int getcapacity() {
		return capacity;
	}
			
		
	

	T at(int a) {
		if (a >= size1) {
			throw runtime_error("index not in array");
		}
		return data1[a];
	}

	void printmyvector() {
		for (int i = 0;i < size1;i++) {
			cout << data1[i];
		}
	}





};



int main(int argc, char** argv) {
	myvector<char> a;
	a.push_back1('a');
	a.push_back1('v');
	a.push_back1('v');
	try {
		cout << a.at(5);
	}
	catch (const exception& err) { cout << err.what(); };

	




	return 0;
}