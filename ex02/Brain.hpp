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
        ~Brain( void );

        Brain &operator=( const Brain &other );

        std::string ideas[Brain::numberOfIdeas];
};

#endif