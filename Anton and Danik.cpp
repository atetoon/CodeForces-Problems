#include<bits/stdc++.h> 
using namespace std;

int main() {
    int n;
    string s;
    cin >> n >> s;
    int c1 = 0;
    int c2 = 0;

    for(int i = 0; i < s.size(); i++) {
        if(s[i] == 'A') c1++;
        if(s[i] == 'D') c2++;
    }
    if(c1 > c2) cout << "Anton";
    if(c2 > c1) cout << "Danik";
    if(c1 == c2) cout << "Friendship"; 
}