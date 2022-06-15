#ifndef ANIMAL_H
# define ANIMAL_H

# include <string>
# include <iostream>
# include "Brain.hpp"

class Animal
{
    public:
        virtual ~Animal( void );

        virtual Animal &operator=( const Animal &other );

        virtual void makeSound( void ) const = 0;

        const std::string &getType( void ) const;

        virtual Brain *getBrain( void ) const = 0;

    protected:

        std::string type;

    private:

};

std::ostream &operator<<( std::ostream &ostream, const Animal &instance );

#endif
