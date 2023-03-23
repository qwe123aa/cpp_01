#include <iostream>
#include <string.h>
#include <stdio.h>

using namespace std;

int main(void) {
	char str1[30] = "Jiwoo";
	char str2[30] = "Rock";

	const int str1_1 = strlen(str1);
	const int str2_1 = strlen(str2);

	for (int i = str1_1; i < str1_1 + str2_1; i++) {
		str1[i] = str2[i - str1_1];

		printf("%s\n", str1);
	}
	return 0;
}