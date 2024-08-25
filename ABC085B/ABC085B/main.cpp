//
//  main.cpp
//  ABC085B
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
    vector<int> d(N);
    for (i=0; i<N; i++) cin >> d[i];
    
    sort(d.begin(), d.end(), greater<>());
    
    int temp = 0;
    int count = 0;
    for (i=0; i<N; i++) {
        if (temp != d[i]) {
            temp = d[i];
            count++;
        }
    }
    
    cout << count << endl;
}
