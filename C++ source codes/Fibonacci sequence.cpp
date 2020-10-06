#include <iostream>
using namespace std;

int main() {


    int n1=0,n2=1,n3,x,num;
    cout << "Please enter the number of fibonacci numbers you want:\n";
    cin >> num;
    cout << endl << endl;

    while(num==0) {
        cout << "No numbers, please enter a number greater than zero :)";
    }
    if(num==1) {
        cout << n1 << endl;
    }
    else if(num==2) {
        cout << n1 << endl << n2 << endl;
    }
    else if(num>2) {
        cout << n1 << endl << n2 << endl;
        for(x=2;x<num;x++) {
            n3 = n1 + n2;
            n1 = n2;
            n2 = n3;
            cout << n3 << endl;
        }
    }
    return 0;
}