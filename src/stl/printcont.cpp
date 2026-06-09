#include "common.h"
using namespace std;
template<typename T>
void print(const T& a) {
	for (auto i : a) {
		cout << i;
	}
}





int main() {
	vector<string> b{ "one", "two", "three","four"};
	print(b);
	cout << endl;
	set< string > c{ "one", "two", "three","four" };
	print(c);

	return 0;
}