#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>

class Fixed {
	private:
		int value;
		static const int fracBits = 8;
	public:
		Fixed();
		Fixed(const int n);
		Fixed(const float n);
		Fixed(const Fixed& fixed);
		Fixed& operator=(const Fixed& fixed);
		~Fixed();
		int getRawBits(void) const;
		void setRawBits(int const raw);
		int toInt(void) const;
		float toFloat(void) const;
		bool operator>(const Fixed& fixed) const;
		bool operator<(const Fixed& fixed) const;
		bool operator>=(const Fixed& fixed) const;
		bool operator<=(const Fixed& fixed) const;
		bool operator==(const Fixed& fixed) const;
		bool operator!=(const Fixed& fixed) const;
		Fixed operator+(const Fixed& fixed) const;
		Fixed operator-(const Fixed& fixed) const;
		Fixed operator*(const Fixed& fixed) const;
		Fixed operator/(const Fixed& fixed) const;
		Fixed& operator++();
		Fixed operator++(int);
		Fixed& operator--();
		Fixed operator--(int);
		static Fixed& min(Fixed& f1, Fixed& f2);
		static const Fixed& min(const Fixed& f1, const Fixed& f2);
		static Fixed& max(Fixed& f1, Fixed& f2);
		static const Fixed& max(const Fixed& f1, const Fixed& f2);

};

std::ostream& operator<<(std::ostream &out, const Fixed &fixed);

#endif
