#include "common.h"
using namespace std;

struct count1 {
	char simv;
	int kolvo;
};




int main() {
	string count_string{};


	cin >> count_string;
	map<char, int> a{};



	for (char g : count_string) {
		a[g]++;

	}
	vector<count1> array;

	for (auto g : a) {
		count1 temp;
		temp.simv= g.first;
		temp.kolvo = g.second;
		array.push_back(temp);
	}
	
	sort(array.begin(), array.end(), [](count1 first, count1 second) {return first.kolvo > second.kolvo;});
	for (auto j : array) {
		cout << j.simv << " " << j.kolvo << endl;
	}
	
	
	

	



	return 0;
}