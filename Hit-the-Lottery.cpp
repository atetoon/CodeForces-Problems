#include<bits/stdc++.h>
using namespace std;

int main() {
    int n, ans = 0;
    cin >> n;
    
    for(int denom : {100, 20, 10, 5, 1}) {
        ans+= n/denom;
        n%=denom;
    }

    cout << ans;
}