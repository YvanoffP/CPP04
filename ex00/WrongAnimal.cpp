#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal( void ): type("")
{
    std::cout << "Default WrongAnimal constructor called" << std::endl;
}

WrongAnimal::WrongAnimal( const WrongAnimal &src )
{
    std::cout << "Copy constructor for WrongAnimal called" << std::endl;
    *this = src;
    return ;
}

WrongAnimal::~WrongAnimal( void )
{
    std::cout << "WrongAnimal deconstructor called" << std::endl;
}

WrongAnimal & WrongAnimal::operator=( WrongAnimal const & rhs )
{
    std::cout << "Assignement operator for WrongAnimal called" << std::endl;
    this->type = rhs.getType();
    return (*this);
}

const std::string &WrongAnimal::getType( void ) const
{
    return (this->type);
}

void WrongAnimal::makeSound( void ) const
{
    std::cout << "ahemm... Hi ! 😁" << std::endl;
}

std::ostream &operator<<( std::ostream &ostream, const WrongAnimal &instance )
{
    ostream << instance.getType();
    return (ostream);
}
