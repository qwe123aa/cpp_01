#include <iostream>
#include <string.h>
#include <stdio.h>

using namespace std;

int main(void) {
	char str1[50] = "aaa";
	char str2[50] = "aa";

	const int s1_l = strlen(str1);
	const int s2_l = strlen(str2);

	
	int result = strcmp(str1, str2);
	if (result == -1) {
		printf("str2>str1");
	}
	else if (result == 1) {
		printf("str1>str2");
	}
	else if (result == 0) {
		printf("str1==str2");
	}

	return 0;
}