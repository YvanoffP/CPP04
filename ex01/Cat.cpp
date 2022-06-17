#include "Cat.hpp"

Cat::Cat( void ): Animal(), brain(new Brain)
{
    std::cout << "Default constructor for Cat called" << std::endl;
    this->type = "Cat";
}

Cat::Cat( const Cat & src ): Animal( src ), brain( new Brain(*src.getBrain()) )
{
    std::cout << "Copy constructor for Cat called" << std::endl;
}

Cat::~Cat( void )
{
    std::cout << "Destructor for Cat called" << std::endl;
    delete this->brain;
}

Cat        &Cat::operator=( const Cat &rhs )
{
    std::cout << "Assignement operator for Cat called" << std::endl;
    if (&rhs != this)
    {
        this->type = rhs.getType();
        delete this->brain;
        this->brain = new Brain(*rhs.getBrain());
    }
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
