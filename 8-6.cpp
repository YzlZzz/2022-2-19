//8-6.cpp
#include<iostream>
using namespace std;

const int PI = 3.14;

class shape {
public:
	virtual float getArea() = 0;
	virtual float getPerim() = 0;
	~shape() {}
};

class rectangle :public shape{
public:
	rectangle(float lenth, float width) :Nlenth(lenth), Nwidth(width) {}
	float getArea() {
		return Nlenth * Nwidth;
	}
	float getPerim() {
		return Nlenth * 2 + Nwidth * 2;
	}
	~rectangle() {}

private:
	float Nlenth, Nwidth;
};

class circle :public shape {
public:
	circle(float r) :radius(r) {}
	float getArea() {
		return PI * radius * radius;
	}
	float getPerim() {
		return PI * radius * 2;
	}
	~circle() {}

private:
	float radius;
};

int main() {
	shape* ptr;
	ptr = new circle(3.3);
	cout << "The area of circle is " << ptr->getArea() << endl;
	cout << "The perim of circle is " << ptr->getPerim() << endl;
	delete ptr;

	ptr = new rectangle(7, 3);
	cout << "The area of rectangle is " << ptr->getArea() << endl;
	cout << "The perim of rectangle is " << ptr->getPerim() << endl;
	delete ptr;

	return 0;
}