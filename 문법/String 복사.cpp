﻿#include <iostream>
#include <string.h>
#define _CRT_SECURE_NO_WARNINGS

int main(void) {
	std::string str1;
	std::string str2 = "c++_insert";

	str1 = str2;	//대입 연산자로 문자열 복사가 가능
	std::cout << str1 << std::endl;
	


	return 0;
}