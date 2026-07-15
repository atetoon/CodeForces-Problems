#include<bits/stdc++.h>
using namespace std;

int main() {
    int a, b; cin >> a >> b;
    int maxi = max(a, b);
    int mini = min(a, b);

    cout << mini << " ";
    cout << (maxi - mini)/2;
}