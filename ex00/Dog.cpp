#include "Dog.hpp"

Dog::Dog( void )
{
    this->type = "Dog";
    std::cout << "Default constructor for Dog called" << std::endl;
}

Dog::Dog( Dog const & src ): Animal( src )
{
    std::cout << "Copy constructor for Dog called" << std::endl;
    *this = src;
}

Dog & Dog::operator=( Dog const &rhs )
{
    std::cout << "Assignement operator for Animal called" << std::endl;
    this->type = rhs.getType();
    return (*this);
}

Dog::~Dog( void )
{
    std::cout << "Destructor for Dog called" << std::endl;
}

void Dog::makeSound( void ) const
{
    std::cout << "Woooof" << std::endl;
}
