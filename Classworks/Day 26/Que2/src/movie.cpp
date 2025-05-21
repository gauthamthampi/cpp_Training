#include <iostream>
#include "Movie.h" 

void Movie::setTitle(string str) {
    Movie::title = str; 
}

void Movie::setGenre(string str) {
    Movie::genre = str; 
}

void Movie::setRating(int r) {
    if (r > 10) {
        cout << "Invalid entry" << endl;
    }
    else {
        Movie::rating = r; 
    }
}

string Movie::getStatus() {
    if (Movie::rating <= 10 && Movie::rating > 7) {
        return "Hit";
    }
    else if (Movie::rating < 7 && Movie::rating >= 5) {
        return "Average";
    }
    else {
        return "Flop";
    }
}

string Movie::getTitle() {
    return Movie::title; 
}

string Movie::getGenre() {
    return Movie::genre; 
}

int Movie::getRating() {
    return Movie::rating; 
}
