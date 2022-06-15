#ifndef DOG_H
# define DOG_H

# include "Animal.hpp"
# include "Brain.hpp"

class Dog: public Animal
{
    public:

        Dog( void );
        Dog( Dog const & src );
        ~Dog( void );

        Dog &operator=( Dog const & rhs );
        virtual Animal &operator=( const Animal &other );

        virtual void makeSound( void ) const;

        virtual Brain *getBrain( void ) const;

    private:

        Brain *brain;

};

#endif
