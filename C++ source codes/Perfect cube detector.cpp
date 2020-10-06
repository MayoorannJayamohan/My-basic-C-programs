#include <iostream>
using namespace std;

/* Hi!, I am a useless fellow, who has been struggling with this simple program for hours on end, 
only to find an interesting approach on the internet. */

int main() {

    int cube,n;
    cout << "\nPlease enter a number:\n";
    cin >> n; //storing user's value

    for(int m=0;m<=n;m++) {
        cube = m*m*m; //Cubing every number lesser than the user's number
        if(cube==n) { 
            cout << "\nYes, this is a perfect cube.\nCube root: " << m << endl << endl;
            break;
        }
        else if(cube!=n&&m==n) {
            cout << "\nNo, this is not a perfect cube.\n\n";
        }

    }
    
    return 0;
}