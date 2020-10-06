#include <iostream>
using namespace std;

int main() {
    
    int sqr,n;
    cout << "\nPlease enter a number of your choice:\n";
    cin >> n;
    cout << endl;

    for(int c=0;c<=n;c++) {
        sqr=c*c;

        if(sqr==n) {
            cout << "Yes, this is a perfect square.\nSquare root: " << c << endl << endl;
            break;
        }
        else if(sqr!=n&&c==n) {
            cout << "No, this is not a perfect square.\n\n";
        }
    }
    return 0;
}




