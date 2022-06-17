#ifndef CAT_H
# define CAT_H

# include "Animal.hpp"
# include "Brain.hpp"

class Cat: public Animal
{
    public:

        Cat( void );
        Cat( const Cat & src );
        virtual ~Cat( void );

        Cat &operator=( const Cat & rhs );

        virtual void makeSound( void ) const;

        Brain *getBrain( void ) const;

    private:

        Brain *brain;

};

#endif
