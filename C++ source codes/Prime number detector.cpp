// Get your eyes to line 36.
#include <iostream>
using namespace std;

void isPrime(int n) {
    bool isprime;
    int count=0;

    if(n==1) {
        cout << "\nThis is neither prime nor composite.\n\n";
    }
    else if(n==2) {
        isprime=true;
    }
    
        for(int x=1;x<=n;x++) {
        count++;
        if(n%x==0&&count>1&&count<n) {
            isprime=false;
            break;
        }
        else if(n%x!=0&&count<=n) {
            isprime=true;
            break;
        }
    }
    if(isprime==false) {
        cout << "\nThis is a composite number.\n\n";
    }
    else if(isprime==true) {
        cout << "\nThis is a prime number.\n\n";
    }
}

int main() {
//Please enter you desired number in the function's bracket below
    isPrime(9);
    return 0;
} // NOTE: If you enter one, it will also say that it is a composite number, so ignore that.