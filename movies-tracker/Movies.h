#ifndef MOVIES_H
#define MOVIES_H

#include <vector>
#include "Movie.h"

class Movies
{
private:
    std::vector <Movie> movies_list;
public:
    bool add_movie(std::string name, std::string rating, int watched); // adds movie and outputs true or false depending on the success of the operation
    void display() const; // displays whats stored in the vector
    bool increment_watched(std::string name); // tries to find a movie stored in the vector that is passed into the function as an argument
};

#endif