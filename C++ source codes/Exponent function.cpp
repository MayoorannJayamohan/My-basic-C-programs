#include <iostream>
using namespace std;

int main() {
    double bnum, pnum; 
    double result = 1;
    cout << "Please enter your desired base number:\n";
    cin >> bnum;
    cout << "Please enter a desired power:\n";
    cin >> pnum;
    cout << endl << endl;
    
    
    for (int x=0;x<pnum;x++) {
        result = result * bnum;
    } 
    cout << "The answer is: " << result << endl << endl;
    return 0;
}
