#include "common.h"
using namespace std;
template<typename T>
class myptr {
private:
	T* Data;
public:
	myptr() :Data(nullptr) {};
	myptr(T* data_t) :Data(data_t) {};
	~myptr() { delete[] Data };
	T& operator[](int a) {
		return Data[a];


	}
	T& operator*() {
		return *Data;
	}
	T* release() {
		T* temp = Data;
		Data = nullptr;
		return temp;
	}
	myptr(const myptr& other) = delete;
	myptr& operator=(const myptr& other) = delete;


};

int main() {
	myptr<int> a(new int[10]);
	myptr<int> b;
	a[0] = 10;
	b = a.release();
	cout << b[0];
	


	return 0;
}