#include <iostream>
#include "Movie.h" 

using namespace std;

int main() {
    Movie m; 

    m.setTitle("Interstellar");
    m.setGenre("Sci-Fi");
    m.setRating(9);

    cout << "Title: " << m.getTitle() << endl;
    cout << "Genre: " << m.getGenre() << endl;
    cout << "Rating: " << m.getRating() << endl;
    cout << "Status: " << m.getStatus() << endl;

    return 0;
}
