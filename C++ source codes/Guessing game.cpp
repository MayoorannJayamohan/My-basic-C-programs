#include <iostream>
using namespace std;

int main() {

    int snum = 7;
    int guess;
    int gcount = 0;
    int rcount = 5;
    int glimit = 5;

    while(guess!=snum&&gcount<glimit) {
        cout << "Please enter a number:\n";
        cin >> guess;
        gcount++;
        rcount--;
        cout << "(guesses left: "<< rcount << ')';

        if(guess!=snum&&gcount==glimit) {
            cout << "\n\nYou lose!";
        }
        else if(guess==snum&&gcount<=glimit) {
            cout << "\n\nYou win!!";
        }
    }
    return 0;
}