#include "Animal.hpp"

Animal::Animal( void ): type("")
{
    std::cout << "Default Animal constructor called" << std::endl;
}

Animal::Animal( const Animal &src )
{
    std::cout << "Copy constructor for Animal called" << std::endl;
    *this = src;
    return ;
}

Animal::~Animal( void )
{
    std::cout << "Animal destructor called" << std::endl;
}

Animal & Animal::operator=( Animal const &rhs )
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

std::ostream &operator<<( std::ostream &ostream, const Animal &instance )
{
    ostream << instance.getType();
    return (ostream);
}
