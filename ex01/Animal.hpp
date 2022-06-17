#ifndef ANIMAL_H
# define ANIMAL_H

# include <string>
# include <iostream>
# include "Brain.hpp"

class Animal
{
    public:
        Animal( void );
        Animal( const Animal &src );
        virtual ~Animal( void );

        Animal &operator=( const Animal &other );

        virtual void makeSound( void ) const;

        const std::string &getType( void ) const;

    protected:

        std::string type;

    private:

};

std::ostream &operator<<( std::ostream &ostream, const Animal &instance );

#endif
