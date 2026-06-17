#include<bits/stdc++.h> 
using namespace std;

int main() {
    int firstDollar, totalDollars, numOfBananas;
    cin >> firstDollar >> totalDollars >> numOfBananas;
    
    int borrowedMoney = 0;
    int totalCost = 0;
    for(int i = 1; i <= numOfBananas; i++) {
        totalCost += firstDollar*i;
        
    }
    if(totalCost > totalDollars) {
        borrowedMoney = totalCost-totalDollars;
    }

    cout << borrowedMoney;

}