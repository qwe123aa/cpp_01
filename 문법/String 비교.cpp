#include <iostream>
#include <string.h>
#include <stdio.h>

using namespace std;

int main(void) {
	string str1 = "aaa";
	string str2 = "aa";
	
	//c++ string 편리함
	//str2가 str1보다 사전(dictionary)에 더 늦게 나온다
	if (str2 > str1) {
		cout << "str2 > str1";
	}
	else if (str1 > str2){
		cout << "str1 > str2";
	}
	else {
		printf("str1==str2");
	}

	return 0;
}