// Get your eyes to line 23!

#include <iostream>
using namespace std;

int hcf(int n1,int n2) {
    int cf;
    int count=0;
    if(n1>n2) {
        n1+=n2;
        n2=n1-n2;
        n1=n1-n2;
    }
    for(int x=1;x<n2;x++) {
        count++;
        if(n1%x==0&&n2%x==0&&count<=n1) {
            cf=x;
        }
    }
    return cf;
}

int main() {
//Please enter you desired numbers in the bracket below
    cout << "\nHCF is:\n" << hcf(91,910) << endl << endl;
}  //NOTE: If the HCF is 1, it means that the numbers are mutually prime, or co-primes.