#include "Brain.hpp"

Brain::Brain( void )
{
    std::cout << "Default Brain constructor called" << std::endl;
}

Brain::Brain( const Brain &src )
{
    std::cout << "Copy Brain constructor called" << std::endl;
    for (int i = 0; i < 100; i++) {
        ideas[i] = src.ideas[i];
    }
}

Brain::~Brain( void )
{
    std::cout << "Destructor for Brain called" << std::endl;
}

Brain & Brain::operator=( Brain const & rhs)
{
    std::cout << "Assignement operator for Brain called" << std::endl;
    if (this == &rhs)
        return (*this);
    for (int i = 0; i < Brain::numberOfIdeas; i++)
        this->ideas[i] = rhs.ideas[i];
    return *this;
}

std::string *Brain::getIdeas( void )
{
    return ideas;
}

void Brain::printIdeas( void ) const
{
    for (int i = 0; i < 100; i++) {
		std::cout << ideas[i] << std::endl;
	}
}
