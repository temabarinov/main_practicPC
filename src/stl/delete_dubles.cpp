#include "common.h"
using namespace std;

vector<int> delete_dub(vector<int>& v) {
	vector<int>::iterator a;
	a = v.begin();
	for (a;a != v.end();a++) {
		if (count(v.begin(), v.end(), *a) > 1) {
			auto del=remove(a+1, v.end(), *a);
			v.erase(del, v.end());



		}
	}
	return v;
	
	
}

int main() {
	vector<int> v = { 1, 1, 3, 4,4,5,5,4,6,4 };

	delete_dub(v);
	for (int i : v) {
		cout << i;
	}

	return 0;
}