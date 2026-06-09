#include "common.h"
using namespace std;

vector<int> delete_dub(vector<int>& v) {
	sort(v.begin(), v.end());
	auto del = unique(v.begin(), v.end());
	v.erase(del, v.end());
	
	
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