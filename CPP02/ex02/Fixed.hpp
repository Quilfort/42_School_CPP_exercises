#ifndef FIXED_H
# define FIXED_H

# include <iostream>

class Fixed
{
    public:
            Fixed(void);
			Fixed(int const val);
			Fixed(float const val);
			Fixed(Fixed const &other);
			~Fixed(void);

			Fixed &operator=(Fixed const &other);

			//Comparison operators
			bool operator>(const Fixed& right);
			bool operator<(const Fixed& right);
			bool operator>=(const Fixed& right);
			bool operator<=(const Fixed& right);
			bool operator==(const Fixed& right);
			bool operator!=(const Fixed& right);


			//Arithmetic operators
			Fixed operator+(const Fixed& right);
			Fixed operator-(const Fixed& right);
			Fixed operator*(const Fixed& right);
			Fixed operator/(const Fixed& right);

			//increment/decrement
			Fixed& operator++();
			Fixed& operator--();
			Fixed operator++(int);
			Fixed operator--(int);

			//Member Functions
			int 	getRawBits(void) const;
			void 	setRawBits(int const raw);
			
			float 	toFloat(void) const;
			int		toInt(void) const;

			//Static member functions
			Fixed& min(Fixed& a, Fixed& b);
			Fixed& max(Fixed& a, Fixed& b);
			static const Fixed& min(const Fixed &a, const Fixed &b);
			 static const Fixed& max(const Fixed &a, const Fixed &b);

    private:
            int 				value;
			static const int	fract_bits = 8;
};

//Output stream operator
std::ostream& operator<<(std::ostream& o, const Fixed& fixed);

#endif