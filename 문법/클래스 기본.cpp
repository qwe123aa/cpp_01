#include <iostream>
#include <string.h>

using namespace std;

//여러 data들을 하나의 의미있는 구조체로 묶어서 관리
struct drink {
	string subun;
	string chumga;

};

int main(void) {
	//struct drink가 자료형, c++에서는 drink만 써도 됨
	struct drink 딸기우유;
	딸기우유.subun = "서울우유";	
	딸기우유.chumga = "킹스베리";

	cout << "수분 : " << 딸기우유.subun << "  첨가물 : " << 딸기우유.chumga << endl;


	return 0;
}