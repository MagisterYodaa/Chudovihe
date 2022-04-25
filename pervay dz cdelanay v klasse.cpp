                                             НАЧАЛО               fraction.cpp                НАЧАЛО

#include "fraction.h"

fraction::fraction()
{
	this->numerator = 0;
	this->denominator = 0;
}
fraction::fraction(const unsigned int num, const unsigned int den)
{
	this->numerator = num;
	this->denominator = den;
}
fraction fraction::operator+(const fraction& obj)
{
	if (this->denominator == obj.denominator) {
		return fraction(this->numerator + obj.numerator, denominator);
	}
	else if (this->denominator != obj.denominator) {
		int numerator1 = obj.numerator;
		int denomirator1 = obj.denominator;
		this->numerator = this->numerator * denomirator1;
		numerator1 = this->denominator * numerator1;
		denominator = this->denominator * denomirator1;
		denomirator1 == this->denominator * denomirator1;
		return fraction(this->numerator + numerator1, denominator);
	}
	return fraction();
}
fraction fraction::operator-(const fraction& obj)
{
	if (this->denominator == obj.denominator) {
		return fraction(this->numerator - obj.numerator, denominator);
	}
	else if (this->denominator != obj.denominator) {
		int numerator1 = obj.numerator;
		int denomirator1 = obj.denominator;
		this->numerator = this->numerator * denomirator1;
		numerator1 = this->denominator * numerator1;
		denominator = this->denominator * denomirator1;
		denomirator1 == this->denominator * denomirator1;
		return fraction(this->numerator - numerator1, denominator);
	}
}
fraction fraction::operator*(const fraction& obj)
{
	return fraction(this->numerator * obj.numerator, this->denominator * obj.denominator);
}
fraction fraction::operator/(const fraction& obj)
{
	return fraction(this->numerator * obj.denominator, this->denominator * obj.numerator);
}
fraction fraction::operator+(const int& value)
{
	fraction obj(value, 1);

	size_t NOK;
	size_t max;
	if (this->denominator >= obj.denominator)
	{
		max = obj.denominator;
	}
	else {
		max = obj.denominator;
	}
	for (size_t i = max; i > 0; i++) {
		if ((i % this->denominator == 0) && (i % obj.denominator == 0)) 
		{
			NOK = i;
			break;
		}
	}

	size_t priv_one = NOK / this->denominator;
	size_t priv_two = NOK / obj.denominator;
	
	fraction new_one(this->numerator * priv_one, NOK), new_two(obj.numerator * priv_two, NOK);
	return fraction(new_one.numerator + new_two.numerator, NOK);
}
fraction fraction::operator-(const int& value)
{
	fraction obj(value, 1);

	size_t NOK;
	size_t max;
	if (this->denominator >= obj.denominator)
	{
		max = obj.denominator;
	}
	else {
		max = obj.denominator;
	}
	for (size_t i = max; i > 0; i++) {
		if ((i % this->denominator == 0) && (i % obj.denominator == 0))
		{
			NOK = i;
			break;
		}
	}

	size_t priv_one = NOK / this->denominator;
	size_t priv_two = NOK / obj.denominator;

	fraction new_one(this->numerator * priv_one, NOK), new_two(obj.numerator * priv_two, NOK);
	return fraction(new_one.numerator - new_two.numerator, NOK);
	
}
fraction::operator float()
{
	if (this->numerator == 0 && this->denominator == 0)
		return 0;
	if (this->denominator == 0) {
		std::cout << "error" << std::endl;
		return FLT_MAX;
	}
	return (float)numerator / (float)denominator;
}
void fraction::show()
{
	std::cout << this->numerator;
	std::cout << "/";
	std::cout << this->denominator << std::endl;
}





                              КОНЕЦ                    fraction.cpp                      Конец
                              
