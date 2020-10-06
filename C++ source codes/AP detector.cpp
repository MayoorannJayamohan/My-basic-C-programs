#include <iostream>
using namespace std;

int main() {

    double n1,n2,n3,n4,d1,d2,d3;
    cout << "Please enter the first four terms of the sequence:\n";
    cin >> n1 >> n2 >> n3 >> n4;

    d1 = n2-n1;
    d2 = n3-n2;
    d3 = n4-n3;

    if(d1==d2&&d2==d3) {
        cout << "This is an arithmetic progression.";
    }
    else{
        cout << "This is NOT an arithmetic progression.";
    }
    return 0;
}