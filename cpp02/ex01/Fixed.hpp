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
};

std::ostream& operator<<(std::ostream &out, const Fixed &fixed);

#endif
