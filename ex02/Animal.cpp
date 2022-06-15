#include "Animal.hpp"

Animal::~Animal( void )
{
    std::cout << "Animal deconstructor called" << std::endl;
}

Animal & Animal::operator=( Animal const & rhs )
{
    std::cout << "Assignement operator for Animal called" << std::endl;
    this->type = rhs.getType();
    return (*this);
}

void Animal::makeSound( void ) const
{
    std::cout << "ahemm... Hi ! 😁" << std::endl;
}

const std::string &Animal::getType( void ) const
{
    return (this->type);
}
