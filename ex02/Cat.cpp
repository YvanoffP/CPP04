#include "Cat.hpp"

Cat::Cat( void )
{
    this->type = "Cat";
    this->brain = new Brain();
    std::cout << "Default constructor for Cat called" << std::endl;
}

Cat::Cat( const Cat & src )
{
    std::cout << "Copy constructor for Cat called" << std::endl;
    *this = src;
}

Cat::~Cat( void )
{
    delete this->brain;
    std::cout << "Deconstructor for Cat called" << std::endl;
}

Cat        &Cat::operator=( Cat const &rhs )
{
    std::cout << "Assignement operator for Cat called" << std::endl;
    this->type = rhs.getType();
    *(this->brain) = *(rhs.getBrain());
    return *this;
}

Animal    &Cat::operator=( Animal const &rhs )
{
    std::cout << "Animal Assignement operator for Cat called" << std::endl;
    this->type = rhs.getType();
    *(this->brain) = *(rhs.getBrain());
    return *this;
}

void Cat::makeSound( void ) const
{
    std::cout << "Meeeeow" << std::endl;
}

Brain *Cat::getBrain( void ) const
{
    return (this->brain);
}
