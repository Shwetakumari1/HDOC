#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    int t;
    cin >> t;
    for(int i=0; i<t; i++){
        int n;
        cin >> n;
        bool prime = true;
        if(n==1)
            prime = false;
        if(n!=2 && n%2==0)
            prime = false;
        for(int i=3; i<=sqrt(n); i+=2){
            if(n%i==0)
                prime = false;
        }
        cout << (prime ? "Prime" : "Not prime") << endl;
    }
    return 0;
}
