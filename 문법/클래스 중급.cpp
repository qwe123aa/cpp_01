﻿#include <iostream>

using namespace std;

class MString {
public:
	MString(const char* str) {
		c_str_ = str;
	}

	
	unsigned int size() { return size_; }
	const char* c_str() { return c_str_; }
private:
	unsigned int size_;
	const char* c_str_; //문자열을 가리키는 주소

};

int main(void) {
	MString str = MString("yakitori ikitai");

	cout << str.c_str() << endl;

	return 0;
}