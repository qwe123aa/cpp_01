#include <stdio.h>
#include <string.h>
#define _CRT_SECURE_NO_WARNINGS

int main(void) {
	char str[30] = {0,};
	char str2[30] = "c_insert";

	strcpy(str, str2);	//str에다가 str2에 있는 문자열을 넣겠다 라는 뜻

	printf("%s", str);

	return 0;
}