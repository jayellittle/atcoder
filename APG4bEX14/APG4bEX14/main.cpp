//
//  main.cpp
//  APG4bEX14
//
//  Created by Woo Sung Jahng on 2024/05/06.
//

// #include <bits/stdc++.h>
#include <iostream>

using namespace std;

int main(int argc, const char * argv[]) {
    int A, B, C;
    cin >> A >> B >> C;
    
    cout << max({A, B, C}) - min({A, B, C}) << endl;
}
