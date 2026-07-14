#include<bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    int a, b, c, d;

    while(t--) {
        cin >> a >> b >> c >> d;

        cout << (b > a) + (c > a) + (d > a) << '\n';
    }
}