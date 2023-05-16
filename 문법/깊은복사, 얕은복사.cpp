#include <iostream>

using namespace std;

int main(void) {
	//ptr 1은 int 3개짜리 배열을 동적할당 시킨 후 가리킨다
	//내용물까지 완전히 복사하는 것이 아닌 주솟값만 복사함, 얕은 복사
	int* ptr1 = new int[3];
	ptr1[0] = 0, ptr1[1] = 10, ptr1[2] = 20;

	//ptr2는 별도의 동적할당을 하지 않고 ptr1의 주솟값만 복사한다.
	//이러한 복사를 얕은복사라고 한다(shallow copy)
	//int* ptr2 = ptr1;

	//ptr2는 별도의 공간을 동적할당한 후 ptr1이 가리키는 값들을 복사한다
	//이러한 복사를 깊은 복사라고 한다(deep copy)
	int* ptr2 = new int[3];
	for (int i = 0; i < 3; i++) {
		ptr2[i] = ptr1[i];
	}

	//얕은 복사를 하면 원본 데이터에 종속된다.
	//즉, ptr2[1]도 100으로 바뀌게 된다.
	//깊은 복사를 하면 고유의 공간을 가지므로 
	//ptr2[1]은 100으로 바뀌지 않는다.
	ptr1[1] = 100;

	for (int i = 0; i < 3; i++) {
		cout << ptr1[i] << "\t";
	}
	cout << endl;

	for (int i = 0; i < 3; i++) {
		cout << ptr2[i] << "\t";
	}

	delete[] ptr1;
	delete[] ptr2;

	
	return 0;
}