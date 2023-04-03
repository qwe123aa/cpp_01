#include <iostream>
#include <string.h>

using namespace std;

//여러 data들을 하나의 의미있는 구조체로 묶어서 관리
//일반적으로 구조체, 클래스의 단어의 첫 알파벳을 대문자로
//class는 
class student {
public:
	string name;
	//성능 때문에 문자열로 하지 않음
	//일반적으로 문자열은 정수 데이터보다 많은 메모리 공간을 요구하며
	//정수는 비교연산을 한 번에 할 수 있으나 문자열은 글자 수 만큼 반복하여 비교해야함
	int id;
	int age;
	//0 : 남자  //1 : 여자
	int sex;		//가독성과 유지보수를 위해 열거형(enum)으로 하는 것을 추천
	string dep;

	void print() {
		cout << "이름 : " << name << endl;
		cout << "학번 : " << id << endl;
		cout << "나이 : " << age << endl;
		cout << "성별 : " << sex << endl;
		cout << "학과 : " << dep << endl;
	}
};

int main(void) {
	//(struct student) 자료형(c++에서는 student만 써도 됨)
	student std1;		//동적할당
	std1.name = "임소영";
	std1.id = 2115;
	std1.age = 18;
	std1.sex = 1;
	std1.dep = "소프트웨어과";

	std1.print();

	return 0;
}