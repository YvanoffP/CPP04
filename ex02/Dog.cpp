#include "Dog.hpp"

Dog::Dog( void ): Animal(), brain(new Brain)
{
    std::cout << "Default constructor for Dog called" << std::endl;
    this->type = "Dog";
}

Dog::Dog( Dog const & src ): Animal( src ), brain(new Brain(*src.getBrain()))
{
    std::cout << "Copy constructor for Dog called" << std::endl;
}

Dog::~Dog( void )
{
    delete this->brain;
    std::cout << "Deconstructor for Dog called" << std::endl;
}

Dog        &Dog::operator=( Dog const &rhs )
{
    std::cout << "Assignement operator for Dog called" << std::endl;
    if (&rhs != this)
    {
        this->type = rhs.getType();
        delete this->brain;
        this->brain = new Brain(*rhs.getBrain());
    }
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
