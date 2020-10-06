#include <iostream>
using namespace std;

int permute(string s,int f,int l) {

    if(f==l) {
        cout << s << endl;
    }
    else {
        for(int i=f;i<=l;i++) {
            swap(s[f],s[i]);
            permute(s,f+1,l);
            swap(s[f],s[i]);
        }
    }
}

int factorial(int n) {
    if(n==1||n==0) {
        return 1;
    }
    else {
        return n*factorial(n-1);
    }
}

int main() {
     
     string s = "abcd";
     int n = s.size();
     cout << "No. of possible permutations: " << factorial(n) << endl << endl;
     cout << permute(s,0,n-1) << endl << endl ;
  
  return 0;

}