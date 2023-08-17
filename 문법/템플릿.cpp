#include <iostream>
#include <string>

using namespace std;

/*int sum(int a, int b) {
	return a + b;
}

float sum(float a, float b) {
	return a + b;
}

string sum(string a, string b) {
	return a + b;
}*/

template <typename T>
T sum(T a, T b) {
	return a + b;
}

int main(void) {
	cout << sum<int>(1, 2) << endl;
	cout << sum<float>(1.f, 2.f) << endl;
	cout << sum<string>("1", "2") << endl;

}