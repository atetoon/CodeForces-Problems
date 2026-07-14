#include<bits/stdc++.h>
using namespace std;

int main() {
    long long a, b, c, d;
    cin >> a >> b >> c >> d;

    long long sum = (a + b + c + d)/3;

    for(int i : {a, b, c, d}) {
        if(i < sum) {
            cout << sum - i << " ";
        }
    }
}