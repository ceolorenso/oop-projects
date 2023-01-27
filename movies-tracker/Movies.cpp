#include "Movie.h"
#include "Movies.h"

#include <iostream>

bool Movies::add_movie(std::string name, std::string rating, int watched)
{
    for (const Movie& obj : movies_list)
    {
        if (obj.get_name() == name)
        {
            return false;
        }
    }
    Movie temp{ name, rating, watched };
    movies_list.push_back(temp);
    return true;
}
void Movies::display() const
{
    if (movies_list.size() == 0)
    {
        std::cout << "The list is empty" << std::endl;
    }
    else
    {
        std::cout << "\nThe list of the movies: " << std::endl;
        std::cout << "----------------------------" << std::endl;

        for (const Movie& obj : movies_list)
        {
            obj.display_members();
        }
    }
}