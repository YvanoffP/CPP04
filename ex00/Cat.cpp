#include "Cat.hpp"

Cat::Cat( void )
{
    this->type = "Cat";
    std::cout << "Default constructor for Cat called" << std::endl;
}

Cat::Cat( const Cat & src )
{
    std::cout << "Copy constructor for Cat called" << std::endl;
    *this = src;
}

Cat::~Cat( void )
{
    std::cout << "Deconstructor for Cat called" << std::endl;
}

void Cat::makeSound( void ) const
{
    std::cout << "Meeeeow" << std::endl;
}
