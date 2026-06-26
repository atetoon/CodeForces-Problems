#include<bits/stdc++.h> 
using namespace std;

int main() {
    int n, a[100];
    cin >> n;
    
    int iMin= 0; int iMax = 0;
    for(int i = 0; i < n; i++) {
        cin >> a[i];
        if(a[i] > a[iMax]) iMax = i; //iMin = 4
        if(a[i] <= a[iMin]) iMin = i;  //iMax = 1
    }
    cout << (n-1) - iMin + iMax - (iMax > iMin); 
}
