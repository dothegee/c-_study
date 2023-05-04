//기본 타입 변수와 객체 에 대한 참조
#include <iostream>
using namespace std;

class Circle {
	int radius;
public:
	Circle() {
		radius = 1;
	}
	Circle(int radius) {
		this->radius = radius;
	}
	void setRadius(int radius) {
		this->radius = radius;
	}
	double getArea() {
		return 3.14 * radius * radius;
	}
};

int main() {
	cout << "i" << '\t' << "n" << '\t' << "refn" << endl;
	int i = 1;
	int n = 2;
	int& refn = n; // 참조 변수 refn 선언. refn은 n에 대한 별명
	n = 4;
	refn++;//refn = 5, n = 5
	cout << i << '\t' << n << '\t' << refn << endl;

	refn = i;//refn = 1, n = 1
	refn++;//refn = 2, n = 2
	cout << i << '\t' << n << '\t' << refn << endl;
	
	int* p = &refn;//p는 refn의 주소를 가짐. p는 n의 주소
	*p = 20;//refn = 20, n = 20
	cout << i << '\t' << n << '\t' << refn << endl;

	Circle circle;
	Circle& refc = circle;
	refc.setRadius(10);
	cout << refc.getArea() << " " << circle.getArea() << endl;
}