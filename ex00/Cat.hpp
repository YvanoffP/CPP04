#ifndef CAT_H
# define CAT_H

# include "Animal.hpp"

class Cat: public Animal
{
    public:

        Cat( void );
        Cat( const Cat & src );
        ~Cat( void );

        virtual void makeSound( void ) const;

};

#endif
