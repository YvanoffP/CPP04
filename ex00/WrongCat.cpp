#include "WrongCat.hpp"

WrongCat::WrongCat( void )
{
    this->type = "WrongCat";
    std::cout << "Default constructor for WrongCat called" << std::endl;
}

WrongCat::WrongCat( WrongCat const & src )
{
    std::cout << "Copy constructor for WrongCat called" << std::endl;
    *this = src;
}

WrongCat::~WrongCat( void )
{
    std::cout << "Deconstructor for WrongCat called" << std::endl;
}

void WrongCat::makeSound( void ) const
{
    std::cout << "Meeeeow" << std::endl;
}
