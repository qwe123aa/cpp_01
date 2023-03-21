#include <iostream>

using namespace std;	//이름공간

int main(void) {
	int a = 30;
	
	int* pa = &a;		//pa :a의 주솟값
	*pa = 100;			//pa가 가리키는 대상(a) : 100

	cout << "a의 값은 " << a << endl;

	return 0;
}