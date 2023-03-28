#include <iostream>
#include <string.h>
#include <stdio.h>

using namespace std;

int main(void) {
	char str1[50] = "Hello";
	char str2[50] = "World";

	const int s1_l = strlen(str1);
	const int s2_l = strlen(str2);

	const int l = s1_l < s2_l ? s1_l : s2_l;

	int i;
	for (i = 0; i < 1; i++) {
		if (str1[i] < str2[i]) {
			printf("str2>str\n");
			break;

		}
		else if (str1[i] > str2[i]) {
			printf("str1>str2\n");

		}
	}

	if (i == 1) {
		if (s2_l > s1_l) {
			printf("str2>str\n");

		}
		else if (s1_l > s2_l) {
			printf("str1>str2");

		}
		else {
			printf("str2 == str1 \n");
		}
	}

	return 0;
}