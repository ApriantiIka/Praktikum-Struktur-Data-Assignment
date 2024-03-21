#include <iostream>
#include <map>
using namespace std;

int main() {
    // Mendeklarasikan map 'album' dengan key bertipe data integer dan value bertipe data string
    map<int, string> album;

    // Mengisi map 'album musik' dengan data judul album pertama sampai terbaru
    album[0] = "Taylor Swift";
    album[1] = "Fearless";
    album[2] = "Speak Now";
    album[3] = "Red";
    album[4] = "1989";
    album[5] = "Reputation";
    album[6] = "Lover";
    album[7] = "Folklore";
    album[8] = "Evermore";
    album[9] = "Midnights";

    //// Mencetak judul album untuk setiap key dalam map 'album'
    cout << "=== Album-Album Taylor Swift ===" << endl;
    cout << "Album ke-1: " << album[0] << endl;
    cout << "Album ke-2: " << album[1] << endl;
    cout << "Album ke-3: " << album[2] << endl;
    cout << "Album ke-4: " << album[3] << endl;
    cout << "Album ke-5: " << album[4] << endl;
    cout << "Album ke-6: " << album[5] << endl;
    cout << "Album ke-7: " << album[6] << endl;
    cout << "Album ke-8: " << album[7] << endl;
    cout << "Album ke-9: " << album[8] << endl;
    cout << "Album ke-10: " << album[9] << endl;

    cout << "" << endl;
    cout << "" << endl;
    cout << "By: Aprianti Ika Larasati (2311110023)" << endl;

    return 0;
}