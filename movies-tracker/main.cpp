#include "Movie.h"
#include "Movies.h"

#include <iostream>
#include <string>

void add_movie(Movies& obj, std::string name, std::string rating, int watched)
{
    if (obj.add_movie(name, rating, watched))
    {
        std::cout << name << " succesfully added" << std::endl;
    }
    else
    {
        std::cout << name << " already has been added" << std::endl;
    }
}

int main()
{
    Movies list;
    add_movie(list, "Fight Club", "A", 1);
    add_movie(list, "Fight Club", "A", 1);
    add_movie(list, "Inception", "A", 1);
    list.display();

    return 0;
}