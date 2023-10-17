#include <iostream>
#include <vector>
#include <stdio.h>

using namespace std;

int main(void) {
	vector<string> idol;

	idol.push_back("안유진");
	idol.push_back("우기");
	idol.push_back("다니엘");

	vector<string>::iterator iter;

	for (iter = idol.begin(); iter != idol.end(); iter++)
		cout << *iter << endl;
}