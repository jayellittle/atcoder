//
//  main.cpp
//  ABC088B
//
//  Created by Woo Sung Jahng on 2024/05/06.
//

// #include <bits/stdc++.h>
#include <iostream>
#include <vector>

using namespace std;


int main(int argc, const char * argv[]) {
    int N;
    cin >> N;
    
    int i;
    vector<int> a(N);
    for (i=0; i<N; i++) cin >> a[i];
    
    sort(a.begin(), a.end(), greater<>());
    
    int Alice = 0;
    int Bob = 0;
    for (i=0; i<N; i++) {
        if (i%2 == 0) Alice += a[i];
        else Bob += a[i];
    }
    
    cout << Alice - Bob << endl;
}
