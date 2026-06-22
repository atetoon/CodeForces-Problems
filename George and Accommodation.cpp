#include<bits/stdc++.h> 
using namespace std;

int main() {
    int n;
    cin >> n;
    int cnt = 0;

    while(n--) {
        int n1, n2;
        cin >> n1 >> n2;

        if(n2 - n1 >= 2) {
            cnt++;
        }
    }
    cout << cnt; 
}