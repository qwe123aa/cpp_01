#include <iostream>

using namespace std;
//,함수 오버로딩을 해서 함수 이름을 간결하게 할 수 있다
//함수 오버로딩은 함수 이름은 같지만 매개변수가 다르다.

int sum(int a, int b) {
	return a + b;
}

float sum(float a, float b) {
	return a + b;
}

int main(void) {
	cout << sum(1, 2) << endl;
	return 0;
}