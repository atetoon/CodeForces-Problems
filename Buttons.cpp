#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    int n;
    cin >> n;

    while (n--) {
        ll a, b, c; 
        cin >> a >> b >> c;

        if(c%2) a++;

        cout << (a > b ? "First\n" : "Second\n");
    }
}