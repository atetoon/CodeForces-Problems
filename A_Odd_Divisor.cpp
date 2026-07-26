#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ll n; cin >> n;

    while(n--) {
        ll x; cin >> x;

        while(x%2 == 0) {
            x /= 2;
        }
        if(x==1) {
            cout << "NO\n";
        } else cout << "YES\n";
    }
}