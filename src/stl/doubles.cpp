#include "common.h"
using namespace std;



int main() {
	set<int> mainset{};
	int count_while = 0;
	cin >> count_while;

	for (int i = 0;i < count_while;i++) {
		int temp;
		cin>> temp;
		mainset.insert(temp);
	}
	vector<int> vector_for_sort{};
	for (auto j : mainset) {
		vector_for_sort.push_back(j);
	}
	sort(vector_for_sort.begin(), vector_for_sort.end(), [](int a, int b) {return a > b;});

	for (auto i : vector_for_sort) {
		cout << i << endl;
	}




	return 0;



}