#include <iostream>
using namespace std;

int main() {

    double limit,cdiff,fterm;
    cout << "Please enter the first term to start an AP:\n";
    cin >> fterm;
    cout << "Please enter a common difference:\n";
    cin >> cdiff;
    cout << "Please enter a limit greater than the first term:\n";
    cin >> limit;
    cout << endl << endl;  

    while(limit==0) {
        cout << "Please enter a limit greater than the first term:\n";
        cin >> limit;
        cout << endl << endl;
    }
    do {
        cout << fterm << endl;
        fterm+=cdiff;
    } while(fterm<=limit);
    
    
    return 0;
}