#include <iostream>

using namespace std;

#define COLOR_RED		0
#define COLOR_GREEN		1
#define COLOR_BLUE		2

class Animal {
public:
	Animal(int color, int age) : color_(color), age_(age) { 
		cout << "Animal 생성자()" << endl;
		cout << age_ << "살" << endl;

		switch (color_) {
		case COLOR_RED:
			cout << "빨간색" << endl;
			break;
		case COLOR_GREEN:
			cout << "초록색" << endl;
			break;
		case COLOR_BLUE:
			cout << "파란색" << endl;
			break;
		default:
			cout << "이상한색" << endl;
			break;
		}

	}
	~Animal() { cout << "Animal 소멸자()" << endl; }
	void Bite(void) { cout << "Animal 물다" << endl; }
	void Eat(void) { cout << "Animal 먹다" << endl; }
	void Sleep(void) { cout << "Animal자다" << endl; }

private:
	int color_;
	int age_;
};

class Rabbit : public Animal {
public:
	//매개변수가 없는 부모 생성자가 자동으로 먼저 호출된다
	//부모생성자(Animal(color, age))가 먼저 호출
	Rabbit(int color, int age, int ear_length) : Animal(color, age) { 
		cout << "Rabbit 생성자()" << endl; 
		cout << "귀 길이 " << ear_length_ << endl;
	}
	~Rabbit() { cout << "Rabbit 소멸자()" << endl; }

private:
	int ear_length_;
};

int main(void) {
	Rabbit* rabbit = new Rabbit(COLOR_RED, 3, 20);	//부모의 생성자도 호출
	rabbit->Bite();	//부모의 멤버함수 호출
	delete rabbit;
}