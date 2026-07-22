#include<bits/stdc++.h>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;

    
    for(int i = a+1; ;i++) {
        int cnt = 0;

        for(int j = 1; j<=i; j++) {
            if(i % j == 0)
                cnt++;
        }

        if(cnt == 2) {
            if(i==b) cout << "YES";
            else cout << "NO";
            break;
        }
    }
}