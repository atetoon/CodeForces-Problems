#include<bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;

    while(t--) {
        int n, k; cin >> n >> k;

        bool found = false;

        for(int i = 0; i<n; i++) {
            int num;
            cin >> num;
            if(num == k) found = true;
        }
        cout << (found? "YES" : "NO") << "\n";
    }
}