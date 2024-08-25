//
//  main.cpp
//  APG4bEX17
//
//  Created by Woo Sung Jahng on 2024/05/06.
//

// #include <bits/stdc++.h>
#include <iostream>
#include <vector>

using namespace std;

int main() {
    int N, S;
    cin >> N >> S;
    vector<int> A(N), P(N);
    int i;
    for (i=0; i<N; i++) cin >> A.at(i);
    for (i=0; i<N; i++) cin >> P.at(i);

    int j;
    int count = 0;
    for (i=0; i<N; i++) {
        for (j=0; j<N; j++) {
            if (A.at(i)+P.at(j) == S) count++;
        }
    }
    
    cout << count << endl;
}
