#include "WrongCat.hpp"

WrongCat::WrongCat( void )
{
    this->type = "WrongCat";
    std::cout << "Default constructor for WrongCat called" << std::endl;
}

WrongCat::WrongCat( WrongCat const & src ): WrongAnimal( src )
{
    std::cout << "Copy constructor for WrongCat called" << std::endl;
    *this = src;
}

WrongCat & WrongCat::operator=( WrongCat const &rhs )
{
    std::cout << "Assignement operator for Animal called" << std::endl;
    this->type = rhs.getType();
    return (*this);
}

WrongCat::~WrongCat( void )
{
    std::cout << "Deconstructor for WrongCat called" << std::endl;
}

void WrongCat::makeSound( void ) const
{
    std::cout << "Meeeeow" << std::endl;
}
