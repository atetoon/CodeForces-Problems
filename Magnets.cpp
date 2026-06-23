#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    string prev;
    cin >> prev;

    int group = 1;

    for(int i = 1; i<=n-1; i++) {
        string curr;
        cin >> curr;

        if(curr != prev) {
            group++;
        }
        prev = curr;
    }
    cout << group;
}