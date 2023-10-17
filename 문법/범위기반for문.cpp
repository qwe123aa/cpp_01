#include <iostream>
#include <map>
#include <vector>

using namespace std;

int main(void) {
	double arr[4] = { 1.1,2.2,3.3,4.4 };

	auto a = 4;

	for (double x : arr) {
		cout << x << endl;
	}

	for (auto x : arr)
		cout << x << endl;

}