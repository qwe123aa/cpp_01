#include <iostream>
#include <string.h>
#include <stdio.h>

using namespace std;

int main(void) {
	string str1 = "aaa";
	string str2 = "aa";
	
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