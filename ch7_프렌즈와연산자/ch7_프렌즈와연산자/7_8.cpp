//단항 연산자 중복
// 전위 연산자 !op, ~op, ++op, --op
//전위 ++ 연산자 중복
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
	Power& operator++ ();
};

void Power::show() {
	cout << "kick = " << kick << ", " << "punch = " << punch << endl;
}
Power& Power::operator++() {
	kick++;
	punch++;
	return *this;
}

int main() {
	Power a(3, 5), b;
	a.show();
	b.show();
	b = ++a;
	a.show();
	b.show();
}