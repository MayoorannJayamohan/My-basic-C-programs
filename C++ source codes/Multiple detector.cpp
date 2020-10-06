#include <iostream>
using namespace std;

int main() {

    int num;
    int rnum = 0;
    int tnum;
    int factor;
    cout << endl;
    cout << "Please enter a factor:\n";
    cin >> factor;
    cout << endl << "Please enter a number, so that this program can check whether the number is a multiple of "<<factor<<":\n";
    cin >> num;
    cout << endl;
    tnum = num+factor;
    do {
       rnum+=factor;

    } while(rnum<tnum&&rnum!=num);

    if(rnum==num) {
        cout << "This number is a multiple of "<<factor<<'.' << endl << endl;
    }
    else if(rnum!=num) {
        cout << "No, this number is not a multiple of "<<factor<<'.' << endl << endl;
    }
    return 0;

}