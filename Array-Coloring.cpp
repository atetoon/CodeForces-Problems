#include<bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    

    while(t--) {
        int n; cin >> n;
        int sEven = 0, sOdd= 0;
    
        while(n--) {
            int num; cin >> num;

            if(num%2 == 0) {
                sEven += num;
            } else sOdd += num;
        }
        cout << (sEven%2 == 0 && sOdd%2 == 0? "YES" : "NO") << '\n';
    }
}

int main() {
    int t; cin >> t;
    

    while(t--) {
        int n; cin >> n;

        int odd = 0;

        while(n--) {
            int x;
            cin >> x;

            if(x%2 != 0) odd++;
        }
        cout << (odd%2 == 0? "YES" : "NO") << '\n';
    }
}