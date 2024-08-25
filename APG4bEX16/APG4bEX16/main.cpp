//
//  main.cpp
//  APG4bEX16
//
//  Created by Woo Sung Jahng on 2024/05/06.
//

// #include <bits/stdc++.h>
#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> data(5);
    int i;
    for (i=0; i<5; i++) {
        cin >> data.at(i);
    }

    for (i=0; i<5-1; i++) {
        if (data.at(i) == data.at(i+1)) {
            cout << "YES" << endl;
            return 0;
        }
    }
    cout << "NO" << endl;
}
