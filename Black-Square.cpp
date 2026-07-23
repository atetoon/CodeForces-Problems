#include<bits/stdc++.h>
using namespace std;

int main() {
    vector<int> v(4);

    for(int i = 0; i<4; i++) cin >> v[i];

    string s; int sum = 0;
    cin >> s;

    for(char ch : s) {
        sum+=v[ch - '1'];
    }

    cout << sum;
}