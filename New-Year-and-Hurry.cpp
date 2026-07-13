#include<bits/stdc++.h>
using namespace std;

int main() {
    int n, k; cin >> n >> k;
    int t = 240, cnt = 0, rem;

    rem = t - k;

    for(int i = 1; i<=n; i++) {
        if(rem >= i*5) {
            rem = rem - i*5;
            cnt++;
        } else break;
    }
    cout << cnt << endl;
}