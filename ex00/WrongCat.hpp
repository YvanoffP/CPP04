#ifndef WRONGCAT_H
# define WRONGCAT_H

# include "WrongAnimal.hpp"

class WrongCat: public WrongAnimal
{
    public:

        WrongCat( void );
        WrongCat( WrongCat const & src );
        ~WrongCat( void );
        WrongCat & operator=( WrongCat const &rhs );

        virtual void makeSound( void ) const;

};

#endif
