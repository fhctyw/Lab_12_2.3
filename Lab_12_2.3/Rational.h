#pragma once
#include <string>
using namespace std;

#pragma pack(push, 1)

class Rational
{
	int a, b;
public:
	Rational(int a = 1, int b = 1);
	Rational(const Rational& r);
	Rational& operator=(const Rational& r);

	operator string() const;
	friend ostream& operator<<(ostream& out, const Rational& r);
	friend istream& operator>>(istream& in, Rational& r);

	Rational& operator++();
	Rational& operator--();
	Rational operator++(int);
	Rational operator--(int);

	double value() const { return 1. * a / b; }

	friend Rational operator/(const Rational& r1, const Rational& r2);
	friend bool operator==(const Rational& r1, const Rational& r2);
	friend bool operator<(const Rational& r1, const Rational& r2);
	friend bool operator>(const Rational& r1, const Rational& r2);
private:
	void Reduce();
};

#pragma pack(pop)