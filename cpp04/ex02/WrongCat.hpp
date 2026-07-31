#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

# include "WrongAnimal.hpp"
# include <string>
# include <iostream>

class WrongCat : public WrongAnimal {
	public:
		WrongCat();
		WrongCat(const WrongCat& cat);
		WrongCat& operator=(const WrongCat& cat);
		~WrongCat();

		void makeSound() const;
};

#endif
