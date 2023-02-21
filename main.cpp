#include <iostream>

class Fraction
{
public:
	Fraction(int numerator, int denominator)
	{
		numerator_ = numerator;
		denominator_ = denominator;
	}
	double division() { return static_cast<double>(numerator_) / static_cast<double>(denominator_); }
	bool operator==(Fraction other) { return division() == other.division(); }
	bool operator!=(Fraction other) { return !(*this == other); }
	bool operator<(Fraction other)
	{
		if (division() < other.division()) {
			return true;
		}
		else{
			return false;
		}
	}
	bool operator>=(Fraction other) { return !(*this < other); }
	bool operator>(Fraction other) { return other < *this; }
	bool operator<=(Fraction other) { return !(*this > other); }
private:
	int numerator_;
	int denominator_;
};

int main()
{
	Fraction f1(4, 3);
	Fraction f2(6, 11);

	std::cout << "f1" << ((f1 == f2) ? " == " : " not == ") << "f2" << '\n';
	std::cout << "f1" << ((f1 != f2) ? " != " : " not != ") << "f2" << '\n';
	std::cout << "f1" << ((f1 < f2) ? " < " : " not < ") << "f2" << '\n';
	std::cout << "f1" << ((f1 > f2) ? " > " : " not > ") << "f2" << '\n';
	std::cout << "f1" << ((f1 <= f2) ? " <= " : " not <= ") << "f2" << '\n';
	std::cout << "f1" << ((f1 >= f2) ? " >= " : " not >= ") << "f2" << '\n';
	return 0;
}