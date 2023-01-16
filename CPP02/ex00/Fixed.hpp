#ifndef FIXED_H
# define FIXED_H

# include <iostream>

class Fixed
{
    public:
            Fixed();
			Fixed(Fixed const &other);
			~Fixed();

			Fixed &operator=(Fixed const &other);

			int getRawBits(void) const;
			void setRawBits(int const raw);

    private:
            int 				value;
			static const int	fract_bits = 8;

};

#endif