#ifndef DOG_H
# define DOG_H

# include "Animal.hpp"

class Dog: public Animal
{
    public:

        Dog( void );
        Dog( Dog const & src );
        virtual ~Dog( void );
        Dog & operator=( Dog const &rhs );

        virtual void makeSound( void ) const;

};

#endif
