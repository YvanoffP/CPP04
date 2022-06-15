#include "Cat.hpp"

Cat::Cat( void )
{
    this->type = "Cat";
    std::cout << "Default constructor for Cat called" << std::endl;
}

Cat::Cat( Cat const &src ): Animal( src )
{
    std::cout << "Copy constructor for Cat called" << std::endl;
    *this = src;
}

Cat & Cat::operator=( Cat const &rhs )
{
    std::cout << "Assignement operator for Animal called" << std::endl;
    this->type = rhs.getType();
    return (*this);
}

Cat::~Cat( void )
{
    std::cout << "Destructor for Cat called" << std::endl;
}

void Cat::makeSound( void ) const
{
    std::cout << "Meeeeow" << std::endl;
}
