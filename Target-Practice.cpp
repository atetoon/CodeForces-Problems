#include<bits/stdc++.h>
using namespace std;

int main() {
     int t; cin >> t;
    
    while (t--) {
        int sum = 0;

       for(int i = 0; i<10; i++) {
        char ch;
        for(int j = 0; j<10; j++) {
            cin >> ch;
            if(ch == 'X') {
                sum+= min({i, j, 9-j, 9-i}) + 1;
            }
        }
       } 
       cout << sum << '\n';
    }
    
}