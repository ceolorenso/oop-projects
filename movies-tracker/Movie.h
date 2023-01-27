#ifndef MOVIE_H
#define MOVIE_H

#include <string>

class Movie
{
private:
    // name of the movie
    std::string name;
    // given rating for the movie (G, PG, PG-13, R)
    std::string rating;
    // the number of times the movie has been watched
    int watched;
public:
    // constructor
    Movie(std::string name, std::string rating, int watched);
    // access private members
    std::string get_name() const;
    std::string get_rating() const;
    int get_watched() const;
    // display private members
    void display_members() const;
    // setter function, increments watched by 1 when called
    void increment_watched();
};
#endif