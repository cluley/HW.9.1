#include <iostream>

class Fraction
{
public:
	Fraction(int numerator, int denominator)
	{
		numerator_ = numerator;
		denominator_ = denominator;
	}
	bool operator==(Fraction other) { return numerator_ * other.denominator_ == other.numerator_ * denominator_; }
	bool operator!=(Fraction other) { return !(*this == other); }
	bool operator<(Fraction other)
	{
		if ((numerator_ * other.denominator_) < (other.numerator_ * denominator_)) {
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