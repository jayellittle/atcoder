//
//  main.cpp
//  ABC091B
//
//  Created by Woo Sung Jahng on 2024/05/05.
//

// #include <bits/stdc++.h>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

bool isInVec(string val, vector<string> vec) {
    int i;
    for (i=0; i<vec.size(); i++) {
        if (val == vec[i]) return true;
    }
    return false;
}

int main(int argc, const char * argv[]) {
    int i;
    int N, M;
    cin >> N;
    vector<string> s(N);
    for (i=0; i<N; i++) cin >> s[i];
    cin >> M;
    vector<string> t(M);
    for (i=0; i<M; i++) cin >> t[i];
    
    int j, k;
    vector<string> temp;
    int ans = 0;
    for (i=0; i<N; i++) {
        int val = 0;
        if (isInVec(s[i], temp)) continue;
        for (j=0; j<N; j++) {
            if (s[i] == s[j]) val++;
        }
        for (k=0; k<M; k++) {
            if (s[i] == t[k]) val--;
        }
        
        temp.push_back(s[i]);
        if (val > ans) ans = val;
    }
    for (i=0; i<M; i++) {
        int val = 0;
        if (isInVec(t[i], temp)) continue;
        for (j=0; j<N; j++) {
            if (t[i] == s[j]) val++;
        }
        for (k=0; k<M; k++) {
            if (t[i] == t[k]) val--;
        }
        
        temp.push_back(t[i]);
        if (val > ans) ans = val;
    }
    
    cout << ans << endl;
}
