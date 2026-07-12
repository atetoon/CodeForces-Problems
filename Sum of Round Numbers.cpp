#include<bits/stdc++.h>
using namespace std;

int main() {
    int t,n;
    cin >> t;

    while (t--) {
        cin >> n;

        int d = 10;
        vector<int> v;

        while (n) {
            if(n%d) {
                v.push_back(n%d);
                n = n - n%d;
            }
            d = d * 10;
        }
        cout << v.size() << endl;
        for(auto x: v) {
            cout << x << " ";
        }
        cout << endl;
    }
}