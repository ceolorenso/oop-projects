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
// if the parent increment_watched function returns true, inform the user about the result of the operation
void increment_watched(Movies &obj, std::string name)
{
    if (obj.increment_watched(name)) // if Movies::increment_watched returns true
    {
        std::cout << name << " watch count succesfully incremented by 1" << std::endl;
    }
    else {
        std::cout << name << " movie not found" << std::endl;
    }
}

int main()
{
    Movies list;

    add_movie(list, "Fight Club", "A", 1);
    add_movie(list, "Fight Club", "A", 1);
    add_movie(list, "Inception", "A", 1);

    increment_watched(list, "Fight Club");
    increment_watched(list, "Fight Club");

    list.display();

    return 0;
}