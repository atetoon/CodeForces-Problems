#include<bits/stdc++.h>
using namespace std;

int main() {
    long long n, m, a;
    cin >> n >> m >> a; 

    long long forN = (n+a-1)/a;
    long long forM = (m+a-1)/a;
    
    cout << forN * forM << endl;
}