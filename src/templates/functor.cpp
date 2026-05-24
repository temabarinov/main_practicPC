#include "common.h"
class functor{
private:
	int sum = 0;
	int divis = 0;
public:
	void operator()(const std::vector<int> array) {
		for (int i : array) {
			sum += i;
			if (i % 3 == 0) {
				divis++;
			}
		}




	}
	int getsum() {
		return sum;
	}
	int getdivis() {
		return divis;
	}





};
int main() {
	std::vector<int> array = { 1,2,3,4,5,655,7,8 };
	


}