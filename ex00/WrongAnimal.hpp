#ifndef WRONGANIMAL_H
# define WRONGANIMAL_H

# include <string>
# include <iostream>

class WrongAnimal
{
    public:
        WrongAnimal( void );
        WrongAnimal( const WrongAnimal &src );
        virtual ~WrongAnimal( void );

        WrongAnimal &operator=( const WrongAnimal &other );

        void makeSound( void ) const;

        const std::string &getType( void ) const;

    protected:

        std::string type;

    private:

};

std::ostream &operator<<( std::ostream &ostream, const WrongAnimal &instance);

#endif
