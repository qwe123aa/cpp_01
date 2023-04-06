#include <iostream>
#include <string.h>

using namespace std;

struct Actor {
	string name;
	string dialog;
};

struct Person {
	int weight;
	int height;
};
//여러 data들을 하나의 의미있는 구조체로 묶어서 관리
//일반적으로 구조체, 클래스의 단어의 첫 알파벳을 대문자로
//class는 
class Student {
public:
	//생성자(constructor) : 객체가 생성될 때 호출되는 함수
	//생성자를 정의하지 않으면 default로 매개변수가 없는 생성자가 정의된다.
	Student() {
		name = "임소영";
		id = 2115;
		age = 18;
		sex = 1;
		dep = "소프트웨어과";
	}

	Student(string name_, int id_, int age_, int sex_, string dep_)
		: name(name_), id(id_), age(age_), sex(sex_), dep(dep_) {
		//this->name = name;
		//this->id = id;
		//this->age = age;
		//this->sex = sex;
		//this->dep = dep;
	}

	//class는 멤버변수를 가질 수 있다.
	void print(void) {
		cout << "이름 : " << name << endl;
		cout << "학번 : " << id << endl;
		cout << "나이 : " << age << endl;
		cout << "성별 : " << sex << endl;
		cout << "학과 : " << dep << endl;
	}

private:
	string name;
	//성능 때문에 문자열로 하지 않음
	//일반적으로 문자열은 정수 데이터보다 많은 메모리 공간을 요구하며
	//정수는 비교연산을 한 번에 할 수 있으나 문자열은 글자 수 만큼 반복하여 비교해야함
	int id;
	int age;
	//0 : 남자  //1 : 여자
	int sex;		//가독성과 유지보수를 위해 열거형(enum)으로 하는 것을 추천
	string dep;
};

int main(void) {
	//(struct student) 자료형(c++에서는 student만 써도 됨)
	//Student std1;
	Student std1 = Student();		//동적할당

	struct Person Lim;
	Lim.height = 186;	
	Lim.weight = 82;

	cout << Lim.height << endl;		//height가 포인터라 주솟값이 출력됨 
	cout << Lim.weight << endl;
	std1.print();

	//정적할당
	Student stu1 = Student("임소영", 2115, 18, 1, "뉴미디어소프트웨어과");
	//std1.print();

	struct Actor KYLee;

	KYLee.name = "이경영";
	KYLee.dialog = "진행시켜";

	struct Actor* ptr = &KYLee;
	//ptr->name, (*ptr).name 같은 결과
	cout << "이름 : " << ptr->name << endl;
	cout << "대사 : " << (*ptr).dialog << endl;

	//동적할당
	Student* stu2 = new Student("서강준",3110, 32, 0, "방송연애과");
	stu2->print();

	delete stu2;


	return 0;
}