// Get your eyes to line 17!

#include <iostream>
using namespace std;

int cfacts(int n1,int n2) {
    int cf;
    cout << "The common factors are:\n";
    for(int x=1;x<n1;x++) {
        if(n1%x==0&&n2%x==0) {
            cout << x << endl;
        }
    }
}

int main() {
// Enter you desired numbers below (in the bracket).
    cout << cfacts(10,10) << endl << endl;
    return 0;
}

//note: after listing the common factors, a zero will also be printed, don't mind it. I will fix it 
//next time.