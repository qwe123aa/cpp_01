#include <iostream>
#include <vector>
#include <stdio.h>

using namespace std;

int main(void) {
	vector<string> idol;

	idol.push_back("������");
	idol.push_back("���");
	idol.push_back("�ٴϿ�");

	vector<string>::iterator iter;

	for (iter = idol.begin(); iter != idol.end(); iter++)
		cout << *iter << endl;
}