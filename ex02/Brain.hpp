#ifndef BRAIN_H
# define BRAIN_H

# include <iostream>

class Brain
{

    private:

        static const int numberOfIdeas = 100;

    public:

        Brain( void );
        Brain( const Brain &src );
        virtual ~Brain( void );

        Brain &operator=( const Brain &other );

        void printIdeas( void ) const;
        std::string *getIdeas( void );

        std::string ideas[Brain::numberOfIdeas];
};

#endif
