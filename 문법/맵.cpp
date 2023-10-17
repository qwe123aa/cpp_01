#include <iostream>
#include <map>
#include <vector>

using namespace std;

int main(void) {
	vector<string, int> moving;
	
	moving["번개맨"] = 1987;
	moving["장희수"] = 2000;
	moving["봉평"] = 1959;

	//map은 순서가 없어서 iterator로만 반복문 가능
	//first는 key, second는 value
	//auto는 주로 복잡한 자료형을 대체할 때 사용한다.
	for (auto iter = moving.begin(); iter != moving.end(); iter++)
		cout << iter->first << iter-> second << endl;
}