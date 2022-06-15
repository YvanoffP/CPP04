#include "Dog.hpp"

Dog::Dog( void )
{
    this->type = "Dog";
    this->brain = new Brain();
    std::cout << "Default constructor for Dog called" << std::endl;
}

Dog::Dog( Dog const & src )
{
    std::cout << "Copy constructor for Dog called" << std::endl;
    *this = src;
}

Dog::~Dog( void )
{
    delete this->brain;
    std::cout << "Deconstructor for Dog called" << std::endl;
}

Dog        &Dog::operator=( Dog const &rhs )
{
    std::cout << "Assignement operator for Dog called" << std::endl;
    this->type = rhs.getType();
    *(this->brain) = *(rhs.getBrain());
    return *this;
}

Animal    &Dog::operator=( Animal const &rhs )
{
    std::cout << "Animal Assignement operator for Dog called" << std::endl;
    this->type = rhs.getType();
    *(this->brain) = *(rhs.getBrain());
    return *this;
}

void Dog::makeSound( void ) const
{
    std::cout << "Woooof" << std::endl;
}

Brain *Dog::getBrain( void ) const
{
    return (this->brain);
}
