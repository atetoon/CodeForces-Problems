#include<bits/stdc++.h>
using namespace std;

int main() {
    int y, w;
    cin >> y >> w;
    
    int cnt = 7 - max(y, w);

    int g = __gcd(cnt, 6);

    cout << cnt/g << '/' << 6/g;
}