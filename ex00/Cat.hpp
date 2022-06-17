#ifndef CAT_H
# define CAT_H

# include "Animal.hpp"

class Cat: public Animal
{
    public:

        Cat( void );
        Cat( Cat const & src );
        virtual ~Cat( void );

        Cat &operator=( Cat const &rhs );

        virtual void makeSound( void ) const;

};

#endif
