#include <iostream>

using namespace std;

int main(){
    system("cls"); // Clear Screen
    bool hasil; // Deklarasi Variabel

    // Dan
    hasil = (1 == 1) && (2 == 2); // True Dan True
    cout << hasil << endl << endl;
    hasil = (1 == 1) && (1 == 2); // True Dan False
    cout << hasil << endl << endl;
    hasil = (1 == 2) && (1 == 1); // False Dan True
    cout << hasil << endl << endl;
    hasil = (2 == 1) && (1 == 2); // false Dan False
    cout << hasil << endl << endl << endl;

    // Atau 
    hasil = (1 == 1) || (2 == 2); // True Dan True
    cout << hasil << endl << endl;
    hasil = (1 == 1) || (1 == 2); // True Dan False
    cout << hasil << endl << endl;
    hasil = (1 == 2) || (1 == 1); // False Dan True
    cout << hasil << endl << endl;
    hasil = (2 == 1) || (1 == 2); // false Dan False
    cout << hasil << endl << endl << endl;

    // Not
    hasil = !(1 == 1); // Not(True)
    cout << hasil << endl << endl;

    hasil = !(1 == 2); // Not(False)
    cout << hasil << endl << endl;

    cin.get();
    return 0;
}