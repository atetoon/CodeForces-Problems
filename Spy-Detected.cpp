#include<bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;

    while(t--) {
        int n, common = 0, spy; cin >> n;
        int a[n];

        for(int i = 0; i<n; i++) cin >> a[i];

        
            if(a[0] == a[1])
                common = a[0];
            else if(a[0] == a[2])
                common = a[0];
            else
                common = a[1];

            for (int i = 0; i < n; i++)
            {
                if(common != a[i]) {
                    spy = i + 1;
                    break;
                }
            }

            cout << spy << endl;         
    }
}