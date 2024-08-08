#include <iostream>
#include <string>

using namespace std;

struct Song {
    string name = "";
    int length = 0;
};

struct Album {
    Song* songs;
};

int main() {
    Album a;
    a.songs = new Song[5]; 

    a.songs[1].name = "Blank Space";
    a.songs[1].length = 120;

    a.songs[0].name = "Welcome to New York";
    a.songs[0].length = 150;

    cout << "First song length: " << a.songs->length << endl;
    cout << "Second song length: " << a.songs[1].length << endl;

    delete[] a.songs;

    return 0;
}