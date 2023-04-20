#include <iostream>
#include <string>
#include <string.h>

using namespace std;

class MString {
public:
	MString(const char* str) {
		unsigned int strLength = strlen(str);
		//필요한 길이만큼 문자열 동적할당
		c_str_ = new char[strLength+1];	//'\0' (널문자) 공간 +1
		strcpy(c_str_, str);
	}

	
	unsigned int size() { return size_; }
	char* c_str() { return c_str_; }
private:
	unsigned int size_;
	char* c_str_; //문자열을 가리키는 주소

};

int main(void) {
	//new로 동적할당한 공간은 반드시 delete로 해제시켜야함
	//만약 가릏지 않으면 메모리가 누수됨
	MString* str = new MString("Aitai 2-1");

	cout << str->c_str() << endl;

	//str에 대한 delete는 진행되었으나, str->c_str_에 대한 delete가 진행되지않음
	//TODO:이를 delete해주는 소멸자(destructor)구현하기
	delete str;

	return 0;
}