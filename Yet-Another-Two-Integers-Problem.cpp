#include<bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;

    while(t--) {
        int a, b; cin >> a >> b;
        int num = abs(a - b);

        if(num%10 == 0) {
            cout << num/10 << '\n';
        } else cout << num/10 + 1 << '\n';
    }
}