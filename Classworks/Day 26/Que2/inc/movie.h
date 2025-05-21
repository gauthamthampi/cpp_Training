#ifndef MOVIE_H
#define MOVIE_H

#include <string>
using namespace std;

class Movie {
private:
    string title;
    string genre;
    int rating;

public:
    void setTitle(string str);
    void setGenre(string str);
    void setRating(int r);

    string getTitle();
    string getGenre();
    int getRating();
    string getStatus();
};

#endif // MOVIE_H
