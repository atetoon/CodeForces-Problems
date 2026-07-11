#include<bits/stdc++.h> 
using namespace std;

int main() {
    string s1;
    string s2;
    string s3;

    cin >> s1 >> s2 >> s3;

    if(s1.length() + s2.length() != s3.length()) {
        cout << "NO" << endl;
        return 0;
    }

    unordered_map<char, int> mp;

    for(char ch: s1) {
        mp[ch]++;
    }

    for(char ch: s2) {
        mp[ch]++;
    }

    for(char ch: s3) {
        mp[ch]--;
    }

    for(auto it: mp) {
        if(it.second != 0) {
            cout << "NO";
            return 0;
        }
    }

    cout << "YES";
}

int main2() {
    string s1, s2, s3;
    cin >> s1 >> s2 >> s3;

    s1+=s2;

    sort(s1.begin(), s1.end());
    sort(s3.begin(), s3.end());

    cout << (s1 == s3? "YES" : "NO");
}   