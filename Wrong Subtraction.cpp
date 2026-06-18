#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    int k;
    
    cin >> n >> k;

    for(int i = 1; i<=k; i++) {
        int lastDigit = n%10;
        if(lastDigit == 0) {
            n = n/10;
        } else {
            n--;
        }
    }
    cout << n << endl;
    return 0;
}