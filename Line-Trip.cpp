#include<bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;

    while(t--) {
        int n, x;
        cin >> n >> x;
        
        int prev = 0;
        int mx = 0;

        for(int i = 0; i<n; i++) {
            int curr;
            cin >> curr;

            mx = max(mx, curr - prev);
            prev = curr;
        }

        mx = max(mx, 2*(x-prev));
        cout << mx << endl;
    }
}