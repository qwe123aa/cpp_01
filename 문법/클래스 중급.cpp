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
	MString str = MString("yakitori ikitai");

	cout << str.c_str() << endl;

	return 0;
}