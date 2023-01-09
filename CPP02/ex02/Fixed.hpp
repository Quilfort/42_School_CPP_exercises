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

			int getRawBits(void) const;
			void setRawBits(int const raw);
			
			float toFloat(void) const;
			int toInt(void) const;
    private:
            int 				value;
			static const int	fract_bits = 8;

};

std::ostream& operator<<(std::ostream& o, const Fixed& fixed);

#endif