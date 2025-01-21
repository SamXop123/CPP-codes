#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n;

    bool isPrime=true;
    for(int i=2;i<=n/2;i++) {
        if(n%i==0) {
            isPrime=false;
            break;
        }
    }

    if(isPrime) {
        if(n==1 || n==0) {
            cout<<"Neither Prime nor Composite";
        } else {
            cout<<"Prime";
        }
    }
    else {
        cout<<"Not Prime";
    }

    return 0;
}
