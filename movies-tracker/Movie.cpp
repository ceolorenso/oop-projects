#include <string>
#include <iostream>
#include "Movie.h"

// constructor for initializing private members of the object
Movie::Movie(std::string name, std::string rating, int watched)
{
    this->name = name;
    this->rating = rating;
    this->watched = watched;
}
// get methods
std::string Movie::get_name() const { return name; }
std::string Movie::get_rating() const { return rating; }
int Movie::get_watched() const { return watched; }

// display private members
void Movie::display_members() const
{
    std::cout << "Name: " << get_name() << std::endl;
    std::cout << "Rating: " << get_rating() << std::endl;
    std::cout << "Times watched: " << get_watched() << std::endl;
    std::cout << "\n" << std::endl;
}
// setter function
void Movie::increment_watched() {watched++;}