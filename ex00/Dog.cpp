#include "Dog.hpp"

Dog::Dog( void )
{
    this->type = "Dog";
    std::cout << "Default constructor for Dog called" << std::endl;
}

Dog::Dog( Dog const & src )
{
    std::cout << "Copy constructor for Dog called" << std::endl;
    *this = src;
}

Dog::~Dog( void )
{
    std::cout << "Deconstructor for Dog called" << std::endl;
}

void Dog::makeSound( void ) const
{
    std::cout << "Woooof" << std::endl;
}
