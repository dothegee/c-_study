//new�� �̿��Ѱ�ü�� ���������� ������
//Ŭ�����̸� *�����ͺ��� = new Ŭ�����̸�;
//Ŭ�����̸� *�����ͺ��� = new Ŭ�����̸�(�����ڸŰ���������Ʈ);

//Circle ��ü�� ���� ���� �� ��ȯ ���� �� ����
#include<iostream>
using namespace std;

class Circle {
	int radius;
public:
	Circle();
	Circle(int r);
	~Circle();
	void setRadius(int r) {
		radius = r;
	}
	double getArea() {
		return 3.14 * radius * radius;
	}
};

Circle::Circle() {
	radius = 1;
	cout << "������ ���� radius = " << radius << endl;
}
Circle::Circle(int r) {
	radius = r;
	cout << "�����ڽ��� radius = " << radius << endl;
}
Circle::~Circle() {
	cout << "�Ҹ��� ���� radius = " << radius << endl;
}

int main() {
	Circle* p, * q;
	p = new Circle;
	q = new Circle(30);
	cout << p->getArea() << endl << q->getArea() << endl;
	delete p;
	delete q;

	int radius;
	while (true) {
		cout << "���� ������ �Է�(�����̸� ����)>> ";
		cin >> radius;
		if (radius < 0)
			break;
		Circle* p = new Circle(radius);
		cout << "���� ������ " << p->getArea() << endl;
		delete p;
	}
}
