#include "WrongCat.hpp"

// Constructors
WrongCat::WrongCat() : WrongAnimal("WrongCat") 
{
	std::cout << "\e[0;33mDefault Constructor called of WrongCat\e[0m" << std::endl;
}

WrongCat::WrongCat(const WrongCat &copy)
{
	(void) copy;
	std::cout << "\e[0;33mCopy Constructor called of WrongCat\e[0m" << std::endl;
}


// Destructor
WrongCat::~WrongCat()
{
	std::cout << "\e[0;31mDestructor called of WrongCat\e[0m" << std::endl;
}


// Operators
WrongCat & WrongCat::operator=(const WrongCat &assign)
{
	(void) assign;
	return *this;
}

void	WrongCat::makeSound( void ) const
{
	std::cout << "Meow!"  + _type << std::endl;
}
