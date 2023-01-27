#include "Movie.h"
#include "Movies.h"

#include <iostream>

bool Movies::add_movie(std::string name, std::string rating, int watched)
{
    for (const Movie& obj : movies_list)
    {
        if (obj.get_name() == name) // search for a match
        {
            return false; // if found stop executing
        }
    }
    Movie temp{ name, rating, watched }; // creates a new object and initializes its private members to the passed arguments
    movies_list.push_back(temp); // appends the object to the vector
    return true;
}
void Movies::display() const
{
    if (movies_list.size() == 0) // checks the vector size
    {
        std::cout << "The list is empty" << std::endl;
    }
    else
    {
        std::cout << "\nThe list of the movies: " << std::endl;
        std::cout << "----------------------------" << std::endl;

        for (const Movie& obj : movies_list) 
        {
            obj.display_members(); // accesses the private members of the object that are stored in the vector and outputs them to the user
        }
    }
}
bool Movies::increment_watched(std::string name)
{
    for (Movie &obj : movies_list) // iterates through movie objects until finds the match in name
    {
        if (obj.get_name() == name)
        {
            obj.increment_watched(); // increments watched by 1 
            return true;
        }
    }
    return false;
}