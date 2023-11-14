#include <iostream>
#include <map>
#include <vector>

using namespace std;

class Champ {
public:
	//함수 선언
	Champ(const string& name);
	static int get_cnt() {
		return cnt_;
	}

private:
	static int cnt_;
};

//함수를 바깥에서 정의할 땐 함수 이름 앞에 클래스 이름::
Champ::Champ(const string& name) {
	++cnt_;
}

int Champ::get_cnt() {
	return cnt_;
}

int Champ::cnt_ = 0;

int main(void) {
	Champ* a = new Champ("아지르");
	Champ* b = new Champ("모리아나");
	//Champ::cnt_의 값은 2
	//cnt_변수는 모두가 공유, 하나만 있음
	//Champ형 객체는 두개있다

	//객체를 생성하지 않아도 static 멤버함수를 호출할 수 있다
	cout << Champ::get_cnt() << endl;
	//cout << a->get_cnt() << endl;
	//cout << b->get_cnt() << endl;

}