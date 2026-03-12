// COMSC-210 | Lab 21 | Johnathan Perez Baltazar

#include <iostream>
using namespace std;

class Goat {
    private:
        int age;
        string name;
        string color;
        string names[15] = {"Billy", "Nanny", "Gruff", "Baa", "Goaty", "Capra", "Cheese"
            , "Horny", "Bleat", "Moo", "Fuzzy", "Woolly", "Cloven", "Pygmy", "Alpine"};
        string colors[15] = {"White", "Black", "Brown", "Gray", "Violet", "Orange"
            , "Golden", "Silver", "Cream", "Tan", "Red", "Blue", "Green", "Yellow", "Pink"};
    public:
        Goat(){
            age = rand() % 20 + 1; // Random age between 1 and 20
            name = names[rand() % 15]; // Random name from the list
            color = colors[rand() % 15]; // Random color from the list
        }

        Goat(int a, string n, string c) {
            age = a;
            name = n;
            color = c;
        }
};

/**
 * @brief - Description of main
 * @return 
*/
int main() {
    return 0;
}