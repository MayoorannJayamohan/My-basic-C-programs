#include <iostream>
using namespace std;

int main() {

    double fterm,cdiff,nterms,sum=0;
    int x=0;  
    cout << "Please enter the first term of the AP:\n";
    cin >> fterm;
    cout << "Please enter the common difference for the AP:\n";
    cin >> cdiff;
    cout << "Please enter the number of terms whose sum you want:\n";
    cin >> nterms;
    cout << endl << endl;

   do {
       x++;
       sum+=fterm;
       fterm+=cdiff;
   } while(x<nterms);
   cout << sum << endl << endl;
   return 0;

}