#include<bits/stdc++.h>
using namespace std;

int main() {
    int x;
    cin >> x;
    int cnt = 0;

    if(x >= 5) {
        cnt = x/5;
        x = x%5;
        
    } 
   
    if(x == 1 || x == 2 || x == 3 || x == 4) {
            cnt++;
    }
    cout << cnt;
}