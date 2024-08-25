//
//  main.cpp
//  ABC061B
//
//  Created by Woo Sung Jahng on 2024/05/03.
//

// #include <bits/stdc++.h>
#include <iostream>
#include <vector>

using namespace std;

int main() {
  int N, M;
  cin >> N >> M;
  
  vector<int> count(N);
  
  int i;
  int city;
  for (i=0; i<2*M; i++) {
    cin >> city;
    count[city-1]++;
  }
  
  for (i=0; i<N; i++) {
    cout << count[i] << endl;
  }
}
