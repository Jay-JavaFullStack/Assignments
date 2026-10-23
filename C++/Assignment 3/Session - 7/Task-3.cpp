#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main() {
    string newSong;
    cout << "Enter a new song: ";
    getline(cin, newSong);

    ofstream file("my_fav_songs.txt", ios::app);  
    file << newSong << endl;
    file.close();

    ifstream in("my_fav_songs.txt");
    string song;
    cout << "\nUpdated list:" << endl;
    while (getline(in, song)) {
        cout << song << endl;
    }
    in.close();
    return 0;
}