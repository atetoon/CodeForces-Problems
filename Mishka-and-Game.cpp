#include<bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    int score;

    while(t--) {
        int a, b;
        cin >> a >> b;

        if(a > b) score++;
        else if(a < b) score--;
    }

    if(score > 0) cout << "Mishka";
    else if( score < 0) cout << "Chris";
    else cout << "Friendship is magic!^^";
}