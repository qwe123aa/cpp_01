#include <iostream>
#include <string>
#include <string.h>

using namespace std;

class MString {
public:
	//일반적인 생성자
	MString(const char* str) {
		unsigned int strLength = strlen(str);
		//필요한 길이만큼 문자열 동적할당
		c_str_ = new char[strLength+1];	//'\0' (널문자) 공간 +1
		strcpy(c_str_, str);
		cout << "MString 생성자 호출 완료" << endl;
	}

	//복사생성자(별도로 정의하지 않으면 컴파일러가 아래와 같은 복사 생성자를 만들어냄)
	//TODO : 복사된 객체가 소멸될 때 발생하는 에러를 해결하고자
	MString(const MString& rhs)
		: size_(rhs.size_), c_str_(rhs.c_str_)
	{
		cout << "복사생성자 호출" << endl;
	}

	//소멸자(destructor)
	~MString() {
		delete[] c_str_;	//생성자에 동적할당한 공간 해제
		cout << "MString 소멸자 호출 완료" << endl;
	}
	
	unsigned int size() { return size_; }
	char* c_str() { return c_str_; }
private:
	unsigned int size_;
	char* c_str_; //문자열을 가리키는 주소

};

int main(void) {
	//일반적인 생성자 호출
	MString str1 = MString("Aitai");
	cout << str1.c_str() << endl;

	MString str2 = str1;	//복사생성자

	return 0;
}