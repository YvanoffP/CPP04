#include "Brain.hpp"

Brain::Brain( void )
{
    std::cout << "Default Brain constructor called" << std::endl;
}

Brain::Brain( const Brain &src )
{
    std::cout << "Copy Brain constructor called" << std::endl;
    *this = src;
}

Brain::~Brain( void )
{
    std::cout << "Destructor for Brain called" << std::endl;
}

Brain & Brain::operator=( Brain const & rhs)
{
    std::cout << "Assignement operator for Brain called" << std::endl;
    for (int i = 0; i < Brain::numberOfIdeas; i++)
        this->ideas[i] = rhs.ideas[i];
    return *this;
}
