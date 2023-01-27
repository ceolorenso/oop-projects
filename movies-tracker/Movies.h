#ifndef MOVIES_H
#define MOVIES_H

#include <vector>
#include "Movie.h"

class Movies
{
private:
    std::vector <Movie> movies_list;
public:
    bool add_movie(std::string name, std::string rating, int watched);
    void display() const;
};

#endif