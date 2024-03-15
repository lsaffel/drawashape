#include<iostream>
#include<iomanip>
using namespace std;

int main() {

    int height, width;

    cout << "Height: ";
    // cin >> height;
    height = 7;
    cout << "Width: ";
    // cin >> width;
    width = 4;

    char symbol;   // the symbol that the user wants the shape to be drawn with
    cout << "Symbol: " << endl;
    // cin >> symbol;

    symbol = '+';       // instead of cin

    for(int h = 0; h < height; h++){
        for(int w = 0; w < width; w++) {
            cout << setw(3) << symbol;      // setw(3) makes it space, character, space, or width of 3 characters. Included from the new line at the top, 
            // #include<iomanip>
        }
        cout << endl; 

    }

    return 0;
}