//단항 연산자 중복
// 후위 연산자 op++, op--
// 후위 ++ 연산자 작성
#include <iostream>
using namespace std;

class Power {
	int kick;
	int punch;
public:
	Power(int kick = 0, int punch = 0) {
		this->kick = kick;
		this->punch = punch;
	}
	void show();
	Power& operator++ (int x);
};

void Power::show() {
	cout << "kick = " << kick << ", " << "punch = " << punch << endl;
}
Power& Power::operator++(int x) {
	Power tmp = *this; // 증가 이전 객체 상태를 저장
	kick++;
	punch++;
	return tmp; // 증가 이전 객체 상태 리턴
}

int main() {
	Power a(3, 5), b;
	a.show();
	b.show();
	b = a++;
	a.show();
	b.show();
}