#include<bits/stdc++.h>
using namespace std;

int main() {
    int k, r, total; cin >> k >> r;
    total = k;

    for(int i = 1; ; i++) {
        total = i*k; 
        if(total%10 == r || total%10 == 0) {
            cout << i << endl;
            break;
        }
    }
}