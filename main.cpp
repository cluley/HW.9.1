#include <iostream>
#include <compare>

class Fraction
{
public:
	Fraction(int numerator, int denominator) : numerator_(numerator), denominator_(denominator) {}
	double division() { return static_cast<double>(numerator_) / static_cast<double>(denominator_); }
	auto operator<=>(Fraction other) {
		return division() <=> other.division();
	}
	bool operator==(Fraction other) {
		return operator<=>(other) == 0;
	}
private:
	int numerator_;
	int denominator_;
};

int main()
{
	Fraction f1(1, 2);
	Fraction f2(2, 4);

	std::cout << "f1" << ((f1 == f2) ? " == " : " not == ") << "f2" << '\n';
	std::cout << "f1" << ((f1 != f2) ? " != " : " not != ") << "f2" << '\n';
	std::cout << "f1" << ((f1 < f2) ? " < " : " not < ") << "f2" << '\n';
	std::cout << "f1" << ((f1 > f2) ? " > " : " not > ") << "f2" << '\n';
	std::cout << "f1" << ((f1 <= f2) ? " <= " : " not <= ") << "f2" << '\n';
	std::cout << "f1" << ((f1 >= f2) ? " >= " : " not >= ") << "f2" << '\n';
	return 0;
}